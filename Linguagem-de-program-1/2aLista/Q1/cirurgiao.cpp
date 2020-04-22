#include "cirurgiao.h"

Cirurgiao::Cirurgiao() {}

Cirurgiao::Cirurgiao(string nm, float alt, float ps) :
Medico (nome, altura, peso) {}

void Cirurgiao::Cirurgia(){
    std::cout << "Cirurgia realizada." << endl;
}
