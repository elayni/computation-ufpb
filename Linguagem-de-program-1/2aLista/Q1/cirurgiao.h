#ifndef CIRURGIAO_H
#define CIRURGIAO_H

#include "medico.h"

class Cirurgiao: public Medico {
public:
    Cirurgiao();
    Cirurgiao(string nm, float alt, float ps);
    void Cirurgia();

};

#endif //CIRURGIAO_H
