#ifndef EXCECOES_H
#define EXCECOES_H
#include <iostream>

using namespace std;

class ValorAbaixoException {
public:
    void ValorAbaixo();

};
class ValorAcimaException {
public:
    void ValorAcima();

};

class ValorMuitoAcimaException{
public:
    void ValorMuitoAcima();

};

#endif
