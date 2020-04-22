#include "endereco.h"

using namespace std;

Endereco::Endereco(){

};

Endereco::Endereco(string rua, string numero, string bairro, string cidade, string estado, string cep) :
    rua (rua),
    numero (numero),
    bairro (bairro),
    cidade (cidade),
    estado (estado),
    cep (cep) {};

string Endereco::toString(){
    string enderecoCompleto;

    enderecoCompleto = "Rua: " + rua + "\nNumero: " + numero + "\nBairro:" + bairro + "\nCidade:" + cidade + "\nEstado:" + estado + "\nCEP: " + cep;
    return enderecoCompleto;
};

string Endereco::getRua(){
    return rua;
};
void Endereco::setRua(string r){
    rua = r;
};
string Endereco::getNumero(){
    return numero;
};
void Endereco::setNumero(string n){
    numero = n;
};
string Endereco::getBairro(){
    return bairro;
};
void Endereco::setBairro(string b){
    bairro = b;
};
string Endereco::getCidade(){
    return cidade;
};
void Endereco::setCidade(string cid){
    cidade = cid;
};
string Endereco::getEstado(){
    return estado;
};
void Endereco::setEstado(string e){
    estado = e;
};
string Endereco::getCep(){
    return cep;
};
void Endereco::setCep(string ce){
    cep = ce;
};
