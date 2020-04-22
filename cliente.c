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

// Formata o texto
void str_trim_lf(char *arr, int length) {
    int i;
    for (i = 0; i < length; i++) { 
        if (arr[i] == '\n') {
            arr[i] = '\0';
            break;
        }
    }
}

// Função responsável pelo apelido printado na tela
void str_overwrite_stdout(char* nickname) {
    printf("\r%s%s", nickname,": ");
    fflush(stdout);
}


// Variáveis globais
volatile sig_atomic_t flag = 0;
int sockfd = 0;
char nickname[NAME] = {};
char *nick[NAME];

void catch_ctrl_c_and_exit(int sig) {
    flag = 1;
}

void recv_msg_handler() {
    char receiveMessage[SEND] = {};
    while (1) {
        int receive = recv(sockfd, receiveMessage, SEND, 0);
        if (receive > 0) {
            printf("\r%s\n", receiveMessage);
            str_overwrite_stdout(nick);
        } else if (receive == 0) {
            break;
        } else {  
        }
    }
}

// Envia mensagem
void send_msg_handler() {
    char message[MSG] = {};
    while (1) {
        str_overwrite_stdout(nick);
        while (fgets(message, MSG, stdin) != NULL) {
            str_trim_lf(message, MSG);
            if (strlen(message) == 0) {
                str_overwrite_stdout(nick);
            } else {
                break;
            }
        }
        send(sockfd, message, MSG, 0);
        if (strcmp(message, "saiu") == 0) {
            break;
        }
    }
    catch_ctrl_c_and_exit(2);
}

int main(int argc, char *argv[]) {
    signal(SIGINT, catch_ctrl_c_and_exit);
    
    // Capturando a porta
    int port = atoi(argv[2]);


    // Guardando apelido em nick
    strcat(nick,argv[3]);
    str_trim_lf(nick, NAME);

    // Criando o socket
    sockfd = socket(AF_INET , SOCK_STREAM , 0);
    if (sockfd < 0) {
        printf("Falha ao criar socket.");
        exit(EXIT_FAILURE);
    }

    // Socket
    struct sockaddr_in server_info, client_info;
    int s_addrlen = sizeof(server_info);
    int c_addrlen = sizeof(client_info);
    memset(&server_info, 0, s_addrlen);
    memset(&client_info, 0, c_addrlen);
    server_info.sin_family = PF_INET;
    server_info.sin_addr.s_addr = inet_addr(argv[1]);
    server_info.sin_port = htons(port);

    // Conectando no servidor
    int err = connect(sockfd, (struct sockaddr *)&server_info, s_addrlen);
    if (err < 0) {
        printf("Erro ao conectar com o servidor!\n");
        exit(EXIT_FAILURE);
    }
    
    // Nomes
    getsockname(sockfd, (struct sockaddr*) &client_info, (socklen_t*) &c_addrlen);
    getpeername(sockfd, (struct sockaddr*) &server_info, (socklen_t*) &s_addrlen);
    printf("Conectou ao batepapo: %s:%d\n", inet_ntoa(server_info.sin_addr), ntohs(server_info.sin_port));
  
    send(sockfd, nick, NAME, 0);

    pthread_t send_msg_thread;
    if (pthread_create(&send_msg_thread, NULL, (void *) send_msg_handler, NULL) != 0) {
        printf ("Erro ao criar thread!\n");
        exit(EXIT_FAILURE);
    }

    pthread_t recv_msg_thread;
    if (pthread_create(&recv_msg_thread, NULL, (void *) recv_msg_handler, NULL) != 0) {
        printf ("Erro ao criar thread!\n");
        exit(EXIT_FAILURE);
    }

    while (1) {
        if(flag) {
            printf("\nBate-papo encerrado.\n");
            break;
        }
    }

    close(sockfd);
    return 0;
}