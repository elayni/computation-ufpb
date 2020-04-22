#ifndef CONTA_H_
#define CONTA_H_

#include <string>

#include "i-conta.h"

using namespace std;

class Conta : public IConta {
public:
    Conta (string nome, float salario, string conta, float sd);

    virtual void definirLimite (void);

    string getNome (void);
    float getSalario (void);
    string getConta (void);
    float getSaldo (void);
    float getLimite (void);
    void setNome (string a);
    void setSalario (float a);
    void setConta (string a);
    void setSaldo (float a);
    void setLimite (float a);

    void imprimeInfo (void);

protected:
    string nomeCliente;
    float salarioMensal;
    string numeroConta;
    float saldo;
    float limite;
};

#endif
