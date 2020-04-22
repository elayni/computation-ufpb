#include "retangulo.h"


Retangulo::Retangulo(){

}

float Retangulo::calcularArea(){
    area = base*altura;
}
float Retangulo::getBase(){
    return base;
}
void Retangulo::setBase(float b){
    base = b;
}
float Retangulo::getAltura(){
    return altura;
}
void Retangulo::setAltura(float al){
    altura = al;
}
