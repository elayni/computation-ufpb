#ifndef ENDERECO_H_
#define ENDERECO_H_

#include <string>

using namespace std;

struct Endereco {

    string rua;
    string numero;
    string bairro;
    string cep;
    string cidade;

    Endereco (void) {};
    Endereco (string rua, string num, string brr, string cep, string cdd) :
        rua (rua),
        numero (num),
        bairro (brr),
        cep (cep),
        cidade (cdd) {};
};

#endif
