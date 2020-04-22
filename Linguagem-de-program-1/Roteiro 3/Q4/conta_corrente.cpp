#include "conta_corrente.h"

ContaCorrente::ContaCorrente(){

}
ContaCorrente::ContaCorrente(double slr, int lmt):
salario (slr),
limite(lmt){}

ContaCorrente::ContaCorrente(string nome, int num, double sld, double slr, int lmt):
Conta(nome, num, sld),
salario (slr),
limite(lmt){}

double ContaCorrente::definirLimite(){
    limite = saldo*2;
}
