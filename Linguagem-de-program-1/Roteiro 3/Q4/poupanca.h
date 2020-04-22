#ifndef POUPANCA_
#define POUPANCA_

#include "conta.h"

class Poupanca: public Conta{
public:
    Poupanca(int vrc, double tx);
    Poupanca(int vrc, double tx, string nome, int num, double sld);
    double render();

    int getVariacao();
    void setVariacao(int vrc);
    double getTaxaRendimento();
    void setTaxaRendimento(double tx);

private:
    int variacao;
    double taxaRendimento;

};

#endif
 
