#include "medico.h"

Medico::Medico() {}

Medico::Medico(string nm, float alt, float ps) :
nome(nm),
altura(alt),
peso (ps) {}

string Medico::getNome(){
    return nome;
}
void Medico::setNome(string nm){
    nome = nm;
}
float Medico::getAltura(){
    return altura;
}
void Medico::setAltura(float alt){
    altura = alt;
}
float Medico::getPeso(){
    return peso;
}
void Medico::setPeso(float ps){
    peso = ps;
}
