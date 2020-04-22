#ifndef GINECOLOGISTA_H
#define GINECOLOGISTA_H

#include "medico.h"

class Ginecologista: public Medico {
public:
    Ginecologista();
    Ginecologista(string nm, float alt, float ps);
    void Consulta();

};

#endif //GINECOLOGISTA_H
