#ifndef DATA_BASE_H
#define DATA_BASE_H

#include <list>
#include <string>
#include <cstdlib>

#include "casa.h"
#include "terreno.h"
#include "apartamento.h"

using namespace std;

class Database {
public:
    Database();
    void registraImovel (Imovel im);
    void mostraImovel (unsigned int index);
    bool listarImoveis(int op, Imovel &im);
    bool opcaoDeRegistro (int op);
    void removeImovel(unsigned int index);
    int buscaPorTitulo(string tit);
    int buscaPorBairro(string brr);
    int buscaPorCidade(string cdd);
    int buscaPorValor(float vlr);

    Imovel& recuperaImovel(unsigned int index);

    list<Imovel> db;
};

#endif
