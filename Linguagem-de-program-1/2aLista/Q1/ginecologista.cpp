#include "ginecologista.h"

Ginecologista::Ginecologista() {}

Ginecologista::Ginecologista(string nm, float alt, float ps) :
Medico (nome, altura, peso) {}

void Ginecologista::Consulta(){
    std::cout << "Consulta realizada." << endl;
}
