#include "imovel.h"
#include <iostream>

Imovel::Imovel(){

}
void Imovel::toString (void) const{
    cout << endl;
    cout << "##########---- ENDERECO ----##########" << endl;
    cout << "Rua: " << endereco.rua;
    cout << "\nNumero: " << endereco.numero;
    cout << "\nBairro: " << endereco.bairro;
    cout << "\nCEP: " << endereco.cep;
    cout << "\nCidade: " << endereco.cidade;
    cout << "\n##########---- IMOVEL ----##########" << endl;
    cout << "Titulo: " << titulo;
    cout << "\nArea: " << area;
    cout << "\nValor: " << valor;
    cout << "\nDisponivel para aluguel (S/N): " << aluguel;
    cout << "\nDisponivel para venda (S/N): " << venda;
}
Imovel::Imovel (int id, string tit, Endereco endereco, float val, float ar, bool alg, bool ven) :
    ID (id),
    titulo (tit),
    endereco (endereco),
    valor (val),
    area (ar),
    aluguel (alg),
    venda(ven) {};

Imovel::Imovel (int id, string tit, float val, float ar, bool alg, bool ven,
                string rua, string num, string brr, string cep, string cdd) :
                ID (id),
                titulo (tit),
                endereco (Endereco (rua, num, brr, cep, cdd)),
                valor (val),
                area (ar),
                aluguel (alg),
                venda (ven) {};

Endereco Imovel::getEnd() const{
    return endereco;
}
void Imovel::setEnd(Endereco end){
    endereco = endereco;
}
float Imovel::getArea() const{
    return area;
}
void Imovel::setArea(float ar){
    area = ar;
}
float Imovel::getValor() const{
    return valor;
}
void Imovel::setValor(float val){
    valor = val;
}
bool Imovel::getVenda() const{
    return venda;
}
void Imovel::setVenda(bool ven){
    venda = ven;
}
bool Imovel::getAluguel() const{
    return aluguel;
}
void Imovel::setAluguel(bool alg){
    aluguel = alg;
}
string Imovel::getTitulo()const{
    return titulo;
}
void Imovel::setTitulo(string tit){
    titulo = tit;
}
int Imovel::getId() const{
    return ID;
}
void Imovel::setId(int id){
    ID = id;
}
