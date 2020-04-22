#ifndef RETANGULO_H
#define RETANGULO_H
#include "figura_geometrica.h"

class Retangulo: public FiguraGeometrica {
public:
    Retangulo();
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
