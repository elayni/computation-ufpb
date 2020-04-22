#ifndef CIRCULO_H
#define CIRCULO_H
#include "figura_geometrica.h"

class Circulo: public FiguraGeometrica {
public:
    Circulo();
    float calcularArea();

    float getRaio();
    void setRaio(float r);

 private:
       float raio;
};
#endif
