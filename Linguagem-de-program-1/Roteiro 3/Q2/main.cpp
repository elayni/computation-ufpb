#include <iostream>

#include "circulo.h"
#include "retangulo.h"
#include "triangulo.h"

using namespace std;

int main() {
    Triangulo tr;
    Retangulo rt;
    Circulo cl;
    tr.setBase(4);
    tr.setAltura(3);
    rt.setBase(5);
    rt.setAltura(3);
    cl.setRaio(2);

    FiguraGeometrica* figuras[] = {&tr, &rt, &cl};

    for(int i=0;i<=2;i++){
        figuras[i]->calcularArea();
        cout << figuras[i]->getArea() << endl;
    }



    return 0;

}
