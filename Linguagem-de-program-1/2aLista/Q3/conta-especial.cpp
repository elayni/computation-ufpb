#include "conta-especial.h"

ContaEspecial::ContaEspecial (string nome, float salario, string conta, float sd) :
    Conta (nome, salario, conta, sd) {}

void ContaEspecial::definirLimite (void) {
    limite = 3*salarioMensal;
}
