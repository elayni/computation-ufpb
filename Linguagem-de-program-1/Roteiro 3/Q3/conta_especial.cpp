#include "conta_especial.h"

ContaEspecial::ContaEspecial(){

}
void ContaEspecial::definirLimite(){
    limite = salarioMensal*3;
}
void ContaEspecial::sacar(double valor){
    saldo -= valor;
}
void ContaEspecial::depositar(double valor){
    saldo += valor;
}
