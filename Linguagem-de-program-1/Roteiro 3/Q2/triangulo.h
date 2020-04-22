#ifndef TRIANGULO_H
#define TRIANGULO_H
#include "figura_geometrica.h"

class Triangulo: public FiguraGeometrica {
public:
    Triangulo();
    float calcularArea();
    
    float getBase();
    void setBase(float b);
    float getAltura();
    void setAltura(float al);

protected:
    float base;
    float altura;
};
#endif
