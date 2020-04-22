#include "arquivo.h"
#include <iostream>


int main(void){
    Arquivo teste;
	string texto;
	string rspst;

    std::cout << "Digite algo: " << endl;
    std::getline (std::cin,texto);

    teste.salvaArquivo(texto);

    std::cout << "Copiar caracteres para outro arquivo?(S/N) " << endl;
    cin >> rspst;

    if(rspst == "S"){
        teste.copiaArquivo(texto);
    }else
        std::cout << "Arquivo nao copiado." << '\n';

    return 0;
}
