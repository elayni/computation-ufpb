#include "testa_valida_numero.h"
#include "excecoes.h"
#include <iostream>


int main(void){
    TestaValidaNumero teste;
    int num;
    int num2;

    std::cout << "Digite um numero: " << endl;
    std::cin >> num;

    teste.validaNumero(num);

    //std::cout << "Digite um numero: " << endl;
    //std::cin >> num2;


    return 0;
}
