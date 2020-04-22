#include "triangulo.h"


Triangulo::Triangulo(){

}
float Triangulo::calcularArea(){
    area = (base*altura)/2;
}
float Triangulo::getBase(){
    return base;
}
void Triangulo::setBase(float b){
    base = b;
}
float Triangulo::getAltura(){
    return altura;
}
void Triangulo::setAltura(float al){
    altura = al;
}
