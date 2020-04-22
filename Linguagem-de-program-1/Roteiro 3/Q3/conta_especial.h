#ifndef CONTAESPECIAL_
#define CONTAESPECIAL_

#include "conta.h"

class ContaEspecial: public Conta{
public:
    ContaEspecial();

    void sacar(double valor);
    void depositar(double valor);

	void definirLimite();
};

#endif
