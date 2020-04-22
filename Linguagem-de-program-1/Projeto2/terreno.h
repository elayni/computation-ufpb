#ifndef TERRENO_H
#define TERRENO_H

#include <string>
#include "imovel.h"

using namespace std;

class Terreno: public Imovel{

public:
    void toString (void);
    Terreno();
    Terreno (int id, string tit, Endereco end, float val, float ar, bool alg, bool ven);

};

#endif
