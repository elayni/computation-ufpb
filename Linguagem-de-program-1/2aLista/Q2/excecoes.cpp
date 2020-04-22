#include "excecoes.h"

void ValorAbaixoException::ValorAbaixo(){
    cout << "Exception capturada" << endl;
    cout << "Valor abaixo." << endl;
}
void ValorAcimaException::ValorAcima(){
    cout << "Exception capturada" << endl;
    cout << "Valor acima." << endl;
}
void ValorMuitoAcimaException::ValorMuitoAcima(){
    cout << "Exception capturada" << endl;
    cout << "Valor muito acima." << endl;
}
