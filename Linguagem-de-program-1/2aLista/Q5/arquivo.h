#ifndef ARQUIVO_H
#define ARQUIVO_H
#include <string>
#include <fstream>
#include <iostream>
#include <string> 

using namespace std;

class Arquivo {
public:
    Arquivo();
    void salvaArquivo(string teste);
    void copiaArquivo(string teste);


};

#endif //ARQUIVO_H
