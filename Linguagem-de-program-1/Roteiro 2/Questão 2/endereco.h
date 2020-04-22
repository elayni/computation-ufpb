#ifndef ENDERECO_H
#define ENDERECO_H

#include <string>

using namespace std;

class Endereco{

  public:
    Endereco();
    Endereco(string rua, string numero, string bairro, string cidade, string estado, string cep);

    string toString();

    string getRua();
    void setRua(string r);
    string getNumero();
    void setNumero(string n);
    string getBairro();
    void setBairro(string b);
    string getCidade();
    void setCidade(string cid);
    string getEstado();
    void setEstado(string e);
    string getCep();
    void setCep(string ce);

  private:
    string rua;
    string numero;
    string bairro;
    string cidade;
    string estado;
    string cep;

};

#endif
