#ifndef IMOVEL_H
#define IMOVEL_H

#include "endereco.h"
#include <list>

using namespace std;

class Imovel{

public:
    virtual void toString (void) const;
    virtual void setPavimentos(unsigned int pav){}
    virtual void setQuartos(unsigned int quar){};
    virtual void setArConstruida(float aCons){};
    virtual void setPosicao(string pos){};
    virtual void setAndar(unsigned int andr){};
    virtual void setCondominio(float cdm){};
    virtual void setGaragem(unsigned int ggm){};

    Imovel ();
    Imovel (int id, string tit, Endereco end, float val, float ar, bool alg, bool ven);
    Imovel (int id, string tit, float val, float ar, bool alg, bool ven,
            string rua, string num, string brr, string cep, string cdd);


    Endereco getEnd() const;
    void setEnd(Endereco end);
    float getArea() const;
    void setArea(float ar);
    float getValor() const;
    void setValor(float val);
    bool getVenda() const;
    void setVenda(bool ven);
    bool getAluguel() const;
    void setAluguel(bool alg);
    string getTitulo() const;
    void setTitulo(string tit);
    int getId() const;
    void setId(int id);

    virtual unsigned int getPavimentos() const {}
    virtual unsigned int getQuartos() const {}
    virtual float getArConstruida() const {}

    virtual string getPosicao() const {}
    virtual unsigned int getAndar() const {}
    virtual float getCondominio() const {}
    virtual unsigned int getGaragem() const {}

protected:
    Endereco endereco;
    float area;
    float valor;
    bool venda;
    bool aluguel;
    string titulo;
    int ID;

};

#endif
