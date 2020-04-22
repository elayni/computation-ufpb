#include "conta_especial.h"

ContaEspecial::ContaEspecial(double slr, int lmt):
ContaCorrente(slr, lmt) {}

double ContaEspecial::definirLimite(){
    limite = saldo*4;
}
