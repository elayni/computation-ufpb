#include "pedido.h"

using namespace std;

Pedido::Pedido{

};

int Pedido::getNumero(){
    return numero;
};
void Pedido::setNumero(int num){
    numero = num;
};
string Pedido::getDescricao(){
    return descicao;
};
void Pedido::setDescricao(string des){
    descricao = des;
};
int Pedido::getQuantidade(){
    return quantidade;
};
void Pedido::setQuantidade(int quant){
    quantidade = quant;
};
float Pedido::getPreco(){
    return preco;
};
void Pedido::setPreco(float pre){
    preco = pre;
};
