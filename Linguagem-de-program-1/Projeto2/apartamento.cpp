#include "apartamento.h"

using namespace std;

void Apartamento::toString (void) {
    Imovel::toString();
};
Apartamento::Apartamento(){

};
Apartamento::Apartamento (unsigned int qrt, unsigned int andr, unsigned int ggm, float cdm, string pos) :
    quartos (qrt),
    andar (andr),
    garagem (ggm),
    condominio (cdm),
    posicao (pos) {}

Apartamento::Apartamento (int id, unsigned int qrt, unsigned int andr, unsigned int ggm, float cdm, string pos,
             string tit, Endereco end, float val, float ar, bool alg, bool ven) :
             Imovel (id, tit, end, val, ar, alg, ven),
             quartos (qrt),
             andar (andr),
             garagem (ggm),
             condominio (cdm),
             posicao (pos) {}

unsigned int Apartamento::getQuartos(){
    return quartos;
};
void Apartamento::setQuartos(unsigned int qrt){
    quartos = qrt;
};
string Apartamento::getPosicao(){
    return posicao;
};
void Apartamento::setPosicao(string pos){
    posicao = pos;
};
unsigned int Apartamento::getAndar(){
    return andar;
};
void Apartamento::setAndar(unsigned int andr){
    andar = andr;
};
float Apartamento::getCondominio(){
    return condominio;
};
void Apartamento::setCondominio(float cdm){
    condominio = cdm;
};
unsigned int Apartamento::getGaragem(){
    return garagem;
};
void Apartamento::setGaragem(unsigned int ggm){
    garagem = ggm;
};
