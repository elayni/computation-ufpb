#include <stdio.h>


int Fibonacci(int num){

    if (num==0)
        return 0;
    if(num==1 || num==2)
        return 1;
    else
       return Fibonacci(num-1) + Fibonacci(num-2);
    
}

int main(){
    int n,i;
    printf("Digite a quantidade de termos da sequência de Fibonacci: ");
    scanf("%d", &n);
   
    printf("\nA sequência de Fibonacci e: \n");

    for(i=0; i<n; i++)
        printf("%d ", Fibonacci(i));
   
    return 0;
}

