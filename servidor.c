#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <signal.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <pthread.h>

#define NAME 30
#define MSG 100
#define SEND 200

// Variáveis globais
int server_sockfd = 0, client_sockfd = 0;
int thread_count = 0;

typedef struct ClientNode {
    int data;
    struct ClientNode *prev;
    struct ClientNode *link;
    char ip[16];
    char name[NAME];
} ClientList;

ClientList *newNode(int sockfd, char *ip) {
    ClientList *np = (ClientList *)malloc(sizeof(ClientList));
    np->data = sockfd;
    np->prev = NULL;
    np->link = NULL;
    strncpy(np->ip, ip, 16);
    strncpy(np->name, "NULL", 5);
    return np;
}

ClientList *root, *now; // Variável global que fica aqui porque ela só funciona após a definição do typedef

void catch_ctrl_c_and_exit(int sig) {
    ClientList *tmp;
    while (root != NULL) {
        printf("\nSocketfd fechados: %d\n", root->data);
        close(root->data); // fecha todos os sockets 
        tmp = root;
        root = root->link;
        free(tmp);
    }
    exit(EXIT_SUCCESS);
}

void send_to_all_clients(ClientList *np, char tmp_buffer[]) {
    ClientList *tmp = root->link;
    while (tmp != NULL) {
        if (np->data != tmp->data) { // Envia mensagem para todos os clientes
           printf(" \"%s\" \n",  tmp_buffer);
            send(tmp->data, tmp_buffer, SEND, 0);
        }
        tmp = tmp->link;
    }
}

void client_handler(void *p_client) {  // Esta função cuida do  do cliente
    int leave_flag = 0;
    char nickname[NAME] = {};
    char recv_buffer[MSG] = {};
    char send_buffer[SEND] = {};
    ClientList *np = (ClientList *)p_client;

    // Apelido
    if (recv(np->data, nickname, NAME, 0) <= 0 || strlen(nickname) < 2 || strlen(nickname) >= NAME-1) {
        printf("%s não colocou o apelido.\n", np->ip);
        leave_flag = 1;
    } else {
        strncpy(np->name, nickname, NAME);
        printf("%s(%d) se conectou com o IP %s.\n", np->name, np->data, np->ip);
        sprintf(send_buffer, "%s se conectou com o IP %s.", np->name, np->ip);
        send_to_all_clients(np, send_buffer);
    }

    // Conversação
    while (1) {
        if (leave_flag) {
            break;
        }
        int receive = recv(np->data, recv_buffer, MSG, 0);
        if (receive > 0) {
            if (strlen(recv_buffer) == 0) {
                continue;
            }
            sprintf(send_buffer, "%s enviou uma mensagem：%s ", np->name, recv_buffer);
        } else if (receive == 0 || strcmp(recv_buffer, "exit") == 0) {
            printf("%s(%s)(%d) saiu do chat.\n", np->name, np->ip, np->data);
            sprintf(send_buffer, "%s saiu do chat.", np->name);
            leave_flag = 1;
        } else {
            printf("Erro Fatal: -1\n");
            leave_flag = 1;
        }
        send_to_all_clients(np, send_buffer);
    }

    // Remove nó
    close(np->data);
    if (np == now) { // remove um nó da ponta
        now = np->prev;
        now->link = NULL;
    } else { // remove um nó do meio
        np->prev->link = np->link;
        np->link->prev = np->prev;
    }
    free(np);
}



int main(int argc, char *argv[]) {
    signal(SIGINT, catch_ctrl_c_and_exit);

    // Criando o socket
    server_sockfd = socket(AF_INET , SOCK_STREAM , 0);
    if (server_sockfd < 0) {
        printf("Falha ao criar socket.");
        exit(EXIT_FAILURE);
    }

    // Capturando o número da porta
    int port = atoi(argv[1]);

    // Socket 
    struct sockaddr_in server_info, client_info;
    int s_addrlen = sizeof(server_info);
    int c_addrlen = sizeof(client_info);
    memset(&server_info, 0, s_addrlen);
    memset(&client_info, 0, c_addrlen);
    server_info.sin_family = PF_INET;
    server_info.sin_addr.s_addr = INADDR_ANY;
    server_info.sin_port = htons(port);

    // Bind e Listen
    bind(server_sockfd, (struct sockaddr *)&server_info, s_addrlen);
    listen(server_sockfd, 5);

    // Printando o nome, e a porta
    printf("Iniciando bate-papo %s na porta %d...\n", argv[2], port);

    // Lista encadeada para os clientes
    root = newNode(server_sockfd, inet_ntoa(server_info.sin_addr));
    now = root;

    pthread_t id[10];

    while (1) {
        client_sockfd = accept(server_sockfd, (struct sockaddr*) &client_info, (socklen_t*) &c_addrlen);

        // Append na lista encadeada dos clientes
        ClientList *c = newNode(client_sockfd, inet_ntoa(client_info.sin_addr));
        c->prev = now;
        now->link = c;
        now = c;

        if (pthread_create(&id[thread_count++], NULL, (void *)client_handler, (void *)c) != 0)
        {
            perror("Erro ao criar thread!\n");
            exit(EXIT_FAILURE);
        }
    }

    return 0;
}