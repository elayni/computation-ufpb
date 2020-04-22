#ifndef OFTALMOLOGISTA_H
#define OFTALMOLOGISTA_H

#include "medico.h"

class Oftalmologista: public Medico {
public:
    Oftalmologista();
    Oftalmologista(string nm, float alt, float ps);
    void Consulta();

};

#endif //OFTALMOLOGISTA_H
