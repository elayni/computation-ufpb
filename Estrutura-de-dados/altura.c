#include <stdio.h> 
#include <stdlib.h> 

/* Referência para a árvore: https://www.geeksforgeeks.org/dfs-traversal-of-a-tree-using-recursion/ */

/* Estrutura do Nó */
struct No { 
    int valor; 
    struct No* esquerda; 
    struct No* direita; 
}; 
  
/* Função para alocar novo Nó */
struct No* newNo(int valor){ 
    struct No* No = (struct No*) 
        malloc(sizeof(struct No)); 
    No->valor = valor; 
    No->esquerda = NULL; 
    No->direita = NULL; 
  
    return (No); 
} 
 
/* Contabiliza a altura*/
int Altura(struct No* h){ 

   if((h == NULL) || (h->esquerda == NULL && h->direita == NULL)){
       return 0;
   }else{ 
        if (Altura(h->esquerda) > Altura(h->direita)){ 
            return 1 + Altura(h->esquerda);
        }else{
            return 1 + Altura(h->direita);
        }  
   }
}

/* Programa para testar a função*/
int main() 
{ 
    struct No* h = newNo(1); 
    h->esquerda = newNo(2); 
    h->direita = newNo(3); 
    h->esquerda->esquerda = newNo(4); 
    h->esquerda->direita = newNo(5); 

    printf("\nAltura da árvore: \n"); 
    printf("%d\n", Altura(h)); 
   
    return 0; 
} 