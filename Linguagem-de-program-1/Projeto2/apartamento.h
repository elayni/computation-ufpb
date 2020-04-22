#ifndef APARTAMENTO_H
#define APARTAMENTO_H

#include <string>
#include "imovel.h"

using namespace std;

class Apartamento: public Imovel{

public:
    void toString (void);

    Apartamento();
    Apartamento (unsigned int qrt, unsigned int andr, unsigned int ggm, float cdm, string pos);
    Apartamento (int id, unsigned int qrt, unsigned int andr, unsigned int ggm, float cdm, string pos,
                 string tit, Endereco end, float val, float ar, bool alg, bool ven);

    unsigned int getQuartos();
    void setQuartos(unsigned int qrt);
    string getPosicao();
    void setPosicao(string pos);
    unsigned int getAndar();
    void setAndar(unsigned int andr);
    float getCondominio();
    void setCondominio(float cdm);
    unsigned int getGaragem();
    void setGaragem(unsigned int ggm);

private:
    unsigned int quartos;
    string posicao;
    unsigned int andar;
    float condominio;
    unsigned int garagem;

};

#endif
