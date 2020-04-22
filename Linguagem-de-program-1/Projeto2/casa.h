#ifndef CASA_H
#define CASA_H

#include <string>
#include "imovel.h"

using namespace std;

class Casa: public Imovel{

public:
    void toString (void);
    Casa ();
    Casa (unsigned int qrt, unsigned int pvm, float act);
    Casa (int id, unsigned int qrt, unsigned int pvm, float act,
          string tit, Endereco end, float val, float ar, bool alg, bool ven);

    unsigned int getPavimentos();
    void setPavimentos(unsigned int pav);
    unsigned int getQuartos();
    void setQuartos(unsigned int quar);
    float getArConstruida();
    void setArConstruida(float aCons);

private:
    unsigned int pavimentos;
    unsigned int quartos;
    float arConstruida;

};

#endif
