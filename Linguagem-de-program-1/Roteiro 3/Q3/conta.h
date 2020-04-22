#ifndef CONTA_
#define CONTA_

#include <string>
#include "iconta.h"

using namespace std;

class Conta: public IConta{
public:
    Conta();
    Conta(string nome, float salario, float num, float sld);

    void definirLimite();

    void sacar(double valor);
	void depositar(double valor);

    string getNomeCliente();
    void setNomeCliente(string nome);
    float getSalarioMensal();
    void setSalarioMensal(float slr);
    int getNumeroConta();
    void setNumeroConta(int num);
    float getSaldo();
    void setSaldo(float sld);
    float getLimite();
    void setLimite(float lmt);

protected:
    string nomeCliente;
    float salarioMensal;
    int numeroConta;
    float saldo;
    float limite;

};

#endif
