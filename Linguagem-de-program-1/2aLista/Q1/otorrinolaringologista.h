#ifndef OTORRINOLARINGOLOGISTA_H
#define OTORRINOLARINGOLOGISTA_H

#include "medico.h"

class Otorrinolaringologista: public Medico {
public:
    Otorrinolaringologista();
    Otorrinolaringologista(string nm, float alt, float ps);
    void Consulta();


};

#endif //OTORRINOLARINGOLOGISTA_H
