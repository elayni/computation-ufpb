#include "oftalmologista.h"

Oftalmologista::Oftalmologista() {}

Oftalmologista::Oftalmologista(string nm, float alt, float ps) :
Medico(nome,altura,peso) {}

void Oftalmologista::Consulta(){
    std::cout << "Consulta realizada." << endl;
}
