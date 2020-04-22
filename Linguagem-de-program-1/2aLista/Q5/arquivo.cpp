#include "arquivo.h"

Arquivo::Arquivo() {}

void Arquivo::salvaArquivo (string teste){
    fstream arquivo;
    arquivo.open("teste.txt", fstream::in | fstream::out | fstream::trunc);

    if (!arquivo.is_open()) {
        cout << "Erro ao abrir o arquivo";
        return ;
    }
    arquivo << teste;

    arquivo.close();
}
void Arquivo::copiaArquivo(string teste){
	fstream arquivoBkp;
    arquivoBkp.open("teste_bkp.txt", fstream::in | fstream::out | fstream::trunc);

    if (!arquivoBkp.is_open()) {
        cout << "Erro ao abrir o arquivo";
        return ;
    }
    arquivoBkp << teste;

	cout << "Copiado com sucesso" << endl;

    arquivoBkp.close();
}
