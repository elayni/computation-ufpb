#ifndef CONTAESPECIAL_
#define CONTAESPECIAL_

#include "conta_corrente.h"

class ContaEspecial: public ContaCorrente{
public:
    ContaEspecial();
    ContaEspecial(double slr, int lmt);
    double definirLimite();
};

#endif
