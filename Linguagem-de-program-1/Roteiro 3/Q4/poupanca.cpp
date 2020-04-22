#include "poupanca.h"

Poupanca::Poupanca(int vrc, double tx):
variacao(vrc),
taxaRendimento(tx) {}

Poupanca::Poupanca(int vrc, double tx, string nome, int num, double sld):
Conta(nome, num, sld),
variacao(vrc),
taxaRendimento(tx) {}

double Poupanca::render(){
    if(variacao == 51){
        return saldo*taxaRendimento;
    }else
        return saldo*taxaRendimento + 0.5*saldo;
}

int Poupanca::getVariacao(){
    return variacao;
}
void Poupanca::setVariacao(int vrc){
    variacao = vrc;
}
double Poupanca::getTaxaRendimento(){
    return taxaRendimento;
}
void Poupanca::setTaxaRendimento(double tx){
    taxaRendimento = tx;
}
