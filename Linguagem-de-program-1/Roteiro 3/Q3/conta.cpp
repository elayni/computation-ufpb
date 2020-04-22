#include "conta.h"

Conta::Conta(){
    
}
Conta::Conta(string nome, float salario, float num, float sld):
nomeCliente (nome),
salarioMensal (salario),
numeroConta (num),
saldo (sld){}

void Conta::definirLimite(){
    limite = salarioMensal*2;
} //2x o salario mensal
void Conta::sacar(double valor){
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
float Conta::getSalarioMensal(){
    return salarioMensal;
}
void Conta::setSalarioMensal(float slr){
    salarioMensal = slr;
}
int Conta::getNumeroConta(){
    return numeroConta;
}
void Conta::setNumeroConta(int num){
    numeroConta = num;
}
float Conta::getSaldo(){
    return saldo;
}
void Conta::setSaldo(float sld){
    saldo = sld;
}
float Conta::getLimite(){
    return limite;
}
void Conta::setLimite(float lmt){
    limite = lmt;
}
