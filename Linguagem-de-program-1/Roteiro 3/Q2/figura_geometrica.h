#ifndef FIGURAGEOMETRICA_
#define FIGURAGEOMETRICA_

#include <math.h>

 class FiguraGeometrica {

 public:
     FiguraGeometrica();
     virtual float calcularArea() = 0;

     float getArea();
     void setArea(float a);

protected:
    float area;
 };

 #endif
