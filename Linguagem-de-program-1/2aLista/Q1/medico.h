#ifndef MEDICO_H
#define MEDICO_H
#include <string>
#include <iostream>

using namespace std;

class Medico {
public:
    Medico();
    Medico(string nm, float alt, float ps);

    string getNome();
    void setNome(string nm);
    float getAltura();
    void setAltura(float alt);
    float getPeso();
    void setPeso(float ps);
protected:
    string nome;
    float altura;
    float peso;

};

#endif //MEDICO_H
