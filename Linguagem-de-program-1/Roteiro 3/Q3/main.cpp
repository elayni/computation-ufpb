#include <iostream>

#include "conta_especial.h"

int main(){
    Conta zeroUm;
    ContaEspecial zeroDois;

    float valor = 100;

    zeroUm.sacar(valor);
    zeroUm.depositar(valor);
    zeroUm.definirLimite();

    zeroDois.sacar(valor);
    zeroDois.depositar(valor);
    zeroDois.definirLimite();

}
