#ifndef PEDIDO_H
#define PEDIDO_H

#include <string>

using namespace std;

class Pedido{
    public:
        Pedido ();

        int getNumero();
        void setNumero(int num);
        string getDescricao();
        void setDescricao(string des);
        int getQuantidade();
        void setQuantidade(int quant);
        float getPreco();
        void setPreco(float pre);

    private:
        int numero;
        string descricao;
        int quantidade;
        float preco;

};

#endif
