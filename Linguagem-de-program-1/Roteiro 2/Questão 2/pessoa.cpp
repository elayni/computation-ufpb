#include "pessoa.h"

using namespace std;

Pessoa::Pessoa(){

};

Pessoa::Pessoa(string nome) :
    nome (nome) {}; //lista de inicialização de membros

Pessoa::Pessoa(string nome, Endereco endereco, string telefone) :
    nome (nome),
    endereco (endereco),
    telefone (telefone) {};

string Pessoa::toString(){
    string enderecoCompleto;

    enderecoCompleto = "Nome: " + nome + "\nTelefone: " + telefone + "\n" + endereco.toString();

    return enderecoCompleto;
};

string Pessoa::getNome(){
     return nome;
};
void Pessoa::setNome(string n){
    nome = n;
};
Endereco Pessoa::getEndereco(){
    return endereco;
};
void Pessoa::setEndereco(Endereco end){
    endereco = end;
};
string Pessoa::getTelefone(){
    return telefone;
};
void Pessoa::setTelefone(string tel){
    telefone = tel;
};
