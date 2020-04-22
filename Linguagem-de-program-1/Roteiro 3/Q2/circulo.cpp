#include "circulo.h"

Circulo::Circulo(){

}

float Circulo::calcularArea(){
    area = 3.14 * pow(raio, 2);
}
float Circulo::getRaio(){
    return raio;
}
void Circulo::setRaio(float r){
    raio = r;
}
