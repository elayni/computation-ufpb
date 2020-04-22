#ifndef CONTA_
#define CONTA_

#include <string>

using namespace std;

class Conta {
public:
    Conta();
    Conta(string nome, int num, double sld);
    void sacar(double valor);
    void depositar(double valor);

    string getNomeCliente();
    void setNomeCliente(string nome);
    int getNumero();
    void setNumero(int num);
    double getSaldo();
    void setSaldo(double sld);

protected:
    string nomeCliente;
    int numero;
    double saldo;

};

#endif
