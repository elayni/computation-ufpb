#ifndef CONTA_ESPECIAL_H_
#define CONTA_ESPECIAL_H_

#include "conta.h"

using namespace std;

class ContaEspecial : public Conta {
public:
    ContaEspecial (string nome, float salario, string conta, float sd);

    void definirLimite (void);
};

#endif
