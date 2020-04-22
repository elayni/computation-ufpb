#include "conta-especial.h"
#include <iostream>

int main() {
    

    // Utilizar Conta 
    Conta a = Conta ("contaNormal", 900.0f, "111111", 300.0f);
    std::cout << "Conta Normal:" << std::endl << std::endl;
    a.imprimeInfo();
    a.sacar (200.0f);
    a.imprimeInfo();
    a.depositar (300.0f);
    a.imprimeInfo();
    a.definirLimite();
    a.imprimeInfo();

    // Utilizar Conta Especial 
    ContaEspecial b = ContaEspecial ("contaEspecial", 1000.0f, "222222", 500.0f);
    std::cout << "Conta Especial:" << std::endl << std::endl;
    b.imprimeInfo();
    b.sacar (200.0f);
    b.imprimeInfo();
    b.depositar (300.0f);
    b.imprimeInfo();
    b.definirLimite();
    b.imprimeInfo();

    return 0;
}
