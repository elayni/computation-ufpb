#include "conta.h"

#include <iostream>

Conta::Conta (string nome, float salario, string conta, float sd) :
    nomeCliente (nome),
    salarioMensal (salario),
    numeroConta (conta),
    saldo (sd) {}

void Conta::definirLimite (void) {
    limite = 2*salarioMensal;
}

void Conta::sacar (double valor) {
    saldo = saldo - valor;
}

void Conta::depositar (double valor) {
    saldo = saldo + valor;
}

string Conta::getNome (void) {
    return nomeCliente;
}
float Conta::getSalario (void) {
    return salarioMensal;
}
string Conta::getConta (void) {
    return numeroConta;
}
float Conta::getSaldo (void) {
    return saldo;
}
float Conta::getLimite (void) {
    return limite;
}
void Conta::setNome (string a) {
    nomeCliente = a;
}
void Conta::setSalario (float a) {
    salarioMensal = a;
}
void Conta::setConta (string a) {
    numeroConta = a;
}
void Conta::setSaldo (float a) {
    saldo = a;
}
void Conta::setLimite (float a) {
    limite = a;
}

void Conta::imprimeInfo (void) {
    std::cout << "Nome: " << nomeCliente << std::endl;
    std::cout << "Salário: " << salarioMensal << std::endl;
    std::cout << "Conta: " << numeroConta << std::endl;
    std::cout << "Saldo: " << saldo << std::endl;
    std::cout << "Limite: " << limite << std::endl;
    std::cout << std::endl;
}
