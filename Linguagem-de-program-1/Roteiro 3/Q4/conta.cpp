#include <iostream>
#include "conta.h"

Conta::Conta(){

}
Conta::Conta(string nome, int num, double sld):
nomeCliente(nome),
numero(num),
saldo(sld){}

void Conta::sacar(double valor){
    if(saldo < valor){
        std::cout << "Saldo insuficiente." << endl;
    }else
        saldo -= valor;
}
void Conta::depositar(double valor){
    saldo += valor;
}

string Conta::getNomeCliente(){
    return nomeCliente;
}
void Conta::setNomeCliente(string nome){
    nomeCliente = nome;
}
int Conta::getNumero(){
    return numero;
}
void Conta::setNumero(int num){
    numero = num;
}
double Conta::getSaldo(){
    return saldo;
}
void Conta::setSaldo(double sld){
    saldo = sld;
}
