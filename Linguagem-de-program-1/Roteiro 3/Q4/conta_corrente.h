#ifndef CONTACORRENTE_
#define CONTACORRENTE_

#include "conta.h"
#include <string>

using namespace std;

class ContaCorrente: public Conta{
public:
    ContaCorrente();
    ContaCorrente(double slr, int lmt);
    ContaCorrente(string nome, int num, double sld, double slr, int lmt);
    double definirLimite();

protected:
    double salario;
    int limite;


};

#endif
