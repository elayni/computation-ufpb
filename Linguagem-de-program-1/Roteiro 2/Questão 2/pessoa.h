#ifndef PESSOA_H
#define PESSOA_H

#include <string>
#include "endereco.h"

using namespace std;

class Pessoa{

  public:
     Pessoa();
     Pessoa(string nome);
     Pessoa(string nome, Endereco endereco, string telefone);

     string toString();

    string getNome();
    void setNome(string n);
    Endereco getEndereco();
    void setEndereco(Endereco end);
    string getTelefone();
    void setTelefone(string tel);

  private:
    string nome;
    Endereco endereco;
    string telefone;

};

#endif
