#include "salvar_dados.h"
#include <iostream>
#include <fstream>
#include <list>

using namespace std;

SalvarDados::SalvarDados(){

}
void SalvarDados::salvarListaImoveis (list<Imovel> &db){
    fstream dados;
    dados.open("dadosImobiliaria.txt", fstream::in | fstream::out | fstream::trunc);

    if (!dados.is_open()) {
        cout << "Erro ao abrir o arquivo";
        return ;
    }

    for (auto i = db.cbegin(); i != db.cend();  ++ i){
        if((*i).getId() == 1){
            dados << (*i).getId() <<endl;
            dados << (*i).getTitulo() << endl;
            dados << (*i).getEnd().rua << endl;
            dados << (*i).getEnd().numero << endl;
            dados << (*i).getEnd().bairro << endl;
            dados << (*i).getEnd().cep << endl;
            dados << (*i).getEnd().cidade << endl;
            dados << (*i).getArea() << endl;
            dados << (*i).getValor() << endl;
            dados << (*i).getVenda() << endl;
            dados << (*i).getAluguel() << endl;
        }else{
            if((*i).getId() == 2){
                dados << (*i).getId() << endl;
                dados << (*i).getTitulo() << endl;
                dados << (*i).getEnd().rua << endl;
                dados << (*i).getEnd().numero << endl;
                dados << (*i).getEnd().bairro << endl;
                dados << (*i).getEnd().cep << endl;
                dados << (*i).getEnd().cidade << endl;
                dados << (*i).getArea() << endl;
                dados << (*i).getValor() << endl;
                dados << (*i).getVenda() << endl;
                dados << (*i).getAluguel() << endl;
                dados << (*i).getPavimentos() << endl;
                dados << (*i).getQuartos() << endl;
                dados << (*i).getArConstruida() << endl;
        }else{
            if((*i).getId() == 3){
                dados << (*i).getId() << endl;
                dados << (*i).getTitulo() << endl;
                dados << (*i).getEnd().rua << endl;
                dados << (*i).getEnd().numero << endl;
                dados << (*i).getEnd().bairro << endl;
                dados << (*i).getEnd().cep << endl;
                dados << (*i).getEnd().cidade << endl;
                dados << (*i).getArea() << endl;
                dados << (*i).getValor() << endl;
                dados << (*i).getVenda() << endl;
                dados << (*i).getAluguel() << endl;
                dados << (*i).getQuartos() << endl;
                dados << (*i).getPosicao() << endl;
                dados << (*i).getAndar() << endl;
                dados << (*i).getCondominio() << endl;
                dados << (*i).getGaragem() << endl;
            }
        }

    }
    dados.close();
    }
} /*
std::list<Imovel*> SalvarDados::recuperaListaImoveis (void){

    std::list<Imovel*> imoveisRecuperados;
    fstream dados;

	Imovel *imovel;

	std::list<Imovel*>::iterator it;
	std::string linhaTXT, substring;

	size_t posicao=0;

	dados.open("dadosImobiliaria.txt", std::ios::in);

	if(!dados.is_open()){

		std::cout<<"Erro ao abrir arquivo"<<std::endl;

	}else{

		while(!dados.eof()){

			getline(dados, linhaTXT);


				posicao = linhaTXT.find_first_of('\n');
				substring = linhaTXT.substr(0, posicao);

				if(!substring.compare("1")){
                    imovel = new Casa();
					imovel->set(&linhaTXT);
					imoveisRecuperados.push_back(imovel);

				}else
                    if(!substring.compare("2")){

    					imovel = new Apartamento();
    					imovel->set(&linhaTXT);
    					imoveisRecuperados.push_back(imovel);

    				}else
                        if(!substring.compare("3")){

        					imovel = new Terreno();
        					imovel->set(&linhaTXT);
        					imoveisRecuperados.push_back(imovel);

				}

            }
		}


	return imoveisRecuperados;

} */
