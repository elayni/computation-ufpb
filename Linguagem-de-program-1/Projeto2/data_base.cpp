#include "data_base.h"
#include <iostream>
#include <typeinfo>
//Desculpe a bagunça
Database::Database(){

}
void Database::registraImovel (Imovel im) {
    db.push_back (im);
}

void Database::mostraImovel (unsigned int index) {
    for (Imovel im : db) {
        if (index == 0) {
            im.toString();
            return;
        }

        index--;
        continue;
    }
}
bool Database::listarImoveis(int op, Imovel &im) {
    int opc = op;
    switch (opc) {
        case 0:
            for (auto i = db.cbegin(); i != db.cend(); ++i){
                std::cout << "::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;
                string titulo = (*i).getTitulo();
                std::cout << titulo <<endl;
            }
            break;
        case 1:
            for (auto i = db.cbegin(); i != db.cend(); ++i){
                std::cout << "::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;
                if((*i).getId() == 2){
                    (*i).toString();
                    cout << endl;
                }
            }
            break;
        case 2:
        for (auto i = db.cbegin(); i != db.cend(); ++i){
            std::cout << "::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;
            if((*i).getId() == 3){
                (*i).toString();
                cout << endl;
            }
        }

            break;
        case 3:
            for (auto i = db.cbegin(); i != db.cend(); ++i){
                std::cout << "::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;
                if((*i).getId() == 1){
                    (*i).toString();
                    cout << endl;
                }
            }
            break;
        case 4:
            for (auto i = db.cbegin(); i != db.cend(); ++i){
                std::cout << "::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;
                if((*i).getAluguel() == true)
                (*i).toString();
            }
            break;
        case 5:
            for (auto i = db.cbegin(); i != db.cend(); ++i){
                std::cout << "::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;
                if((*i).getVenda() == true)
                (*i).toString();
            }
            break;
        case 6:
            return true;
            break;
    }
}
bool Database::opcaoDeRegistro (int op) {
    int opc = op;
    Endereco endereco;
    string titulo;
    float valor;
    float area;
    char temp;
    bool aluguel;
    bool venda;
    unsigned int pavimentos;
    unsigned int quartos;
    float arConstruida;
    string posicao;
    unsigned int andar;
    unsigned int garagem;
    float condominio;
    int ID;


    switch (opc) {
        case 0:
                ID = 1;
                std::cout << endl;
                std::cout << "##########---- ENDERECO ----##########" << endl;
                std::cout << "Rua: " << endl;
                std::getline(std::cin >> std::ws, endereco.rua);
                std::cout << "Numero: ";
                std::cin >> endereco.numero;
                std::cout << "Bairro: ";
                std::getline(std::cin >> std::ws, endereco.bairro);
                std::cout << "CEP: ";
                std::cin >> endereco.cep;
                std::cout << "Cidade: ";
                std::getline(std::cin >> std::ws, endereco.cidade);
                std::cout << "\n##########---- IMOVEL ----##########" << endl;
                std::cout << "Titulo: ";
                std::getline(std::cin >> std::ws, titulo);
                std::cout << "Area: ";
                std::cin >> area;
                std::cout << "Valor: ";
                std::cin >> valor;
                std::cout << "Disponivel para aluguel (S/N): ";
                std::cin >> temp;
                switch (temp) {
                    case 'S': aluguel = true;
                              break;
                    case 'N': aluguel = false;
                              break;
                }
                std::cout << "Disponivel para venda (S/N): ";
                std::cin >> temp;
                switch (temp) {
                    case 'S': venda = true;
                              break;
                    case 'N': venda = false;
                              break;
                }

                registraImovel (Terreno (ID, titulo, endereco, valor, area, aluguel, venda));
                break;

    case 1:
            ID = 2;
            std::cout << endl;
            std::cout << "##########---- ENDERECO ----##########" << endl;
            std::cout << "Rua: " << endl;
            std::getline(std::cin >> std::ws, endereco.rua);
            std::cout << "Numero: ";
            std::cin >> endereco.numero;
            std::cout << "Bairro: ";
            std::getline(std::cin >> std::ws, endereco.bairro);
            std::cout << "CEP: ";
            std::cin >> endereco.cep;
            std::cout << "Cidade: ";
            std::getline(std::cin >> std::ws, endereco.cidade);
            std::cout << "\n##########---- IMOVEL ----##########" << endl;
            std::cout << "Titulo: ";
            std::getline(std::cin >> std::ws, titulo);
            std::cout << "Pavimentos: ";
            std::cin >> pavimentos;
            std:cout << "Quartos: ";
            std::cin >> quartos;
            std::cout << "Area: ";
            std::cin >> area;
            std::cout << "Area construida: ";
            std::cin >> arConstruida;
            std::cout << "Valor: ";
            std::cin >> valor;
            std::cout << "Disponivel para aluguel (S/N): ";
            std::cin >> temp;
            switch (temp) {
                case 'S': aluguel = true;
                          break;
                case 'N': aluguel = false;
                          break;
            }
            std::cout << "Disponivel para venda (S/N): ";
            std::cin >> temp;
            switch (temp) {
                case 'S': venda = true;
                          break;
                case 'N': venda = false;
                          break;
            }

            registraImovel (Casa (ID, quartos, pavimentos, arConstruida, titulo, endereco, valor, area, aluguel, venda));
            break;

        case 2:
                ID = 3;
                std::cout << endl;
                std::cout << "##########---- ENDERECO ----##########" << endl;
                std::cout << "Rua: " << endl;
                std::getline(std::cin >> std::ws, endereco.rua);
                std::cout << "Numero: ";
                std::cin >> endereco.numero;
                std::cout << "Bairro: ";
                std::getline(std::cin >> std::ws, endereco.bairro);
                std::cout << "CEP: ";
                std::cin >> endereco.cep;
                std::cout << "Cidade: ";
                std::getline(std::cin >> std::ws, endereco.cidade);
                std::cout << "\n##########---- IMOVEL ----##########" << endl;
                std::cout << "Titulo: ";
                std::getline(std::cin >> std::ws, titulo);
                std::cout << "Quartos: ";
                std::cin >> quartos;
                std::cout << "Posicao: ";
                std::getline(std::cin >> std::ws, posicao);
                std::cout << "Andar: ";
                std::cin >> andar;
                std::cout << "Condominio: ";
                std::cin >> condominio;
                std::cout << "Vagas na garagem: ";
                std::cin >> garagem;
                std::cout << "Area: ";
                std::cin >> area;
                std::cout << "Valor: ";
                std::cin >> valor;
                std::cout << "Disponivel para aluguel (S/N): ";
                std::cin >> temp;
                switch (temp) {
                    case 'S': aluguel = true;
                              break;
                    case 'N': aluguel = false;
                              break;
                }
                std::cout << "Disponivel para venda (S/N): ";
                std::cin >> temp;
                switch (temp) {
                    case 'S': venda = true;
                              break;
                    case 'N': venda = false;
                              break;
                }

                registraImovel (Apartamento (ID, quartos, andar, garagem, condominio, posicao, titulo, endereco, valor, area, aluguel, venda));
                break;

        case 3:
            return true;
            break;
    }

}
void Database::removeImovel(unsigned int index){
    auto i = db.begin();
    std::advance(i, index);
    db.erase(i);

}
int Database::buscaPorTitulo(string tit){
    int cont = 0;
    for (auto i = db.cbegin(); i != db.cend(); ++i){
        if((*i).getTitulo() == tit)
            return cont;
            cont++;
        }
    return -1;
}
Imovel& Database::recuperaImovel(unsigned int index){
    for (Imovel im : db) {
        if (index == 0) {
            return im;
        }

        index--;
        continue;
    }
}
int Database::buscaPorBairro(string brr){
    int cont = 0;
    for (auto i = db.cbegin(); i != db.cend(); ++i){
        if((*i).getEnd().bairro == brr){
            (*i).toString();
            return cont;
            cont++;
        }
    }
    return -1;
}
int Database::buscaPorCidade(string cdd){
    int cont = 0;
    for (auto i = db.cbegin(); i != db.cend(); ++i){
        if((*i).getEnd().cidade == cdd){
            (*i).toString();
            return cont;
            cont++;
        }
    }
    return -1;
}
int Database::buscaPorValor(float vlr){
    int cont = 0;
    for (auto i = db.cbegin(); i != db.cend(); ++i){
        if((*i).getValor() == vlr){
            (*i).toString();
            return cont;
            cont++;
        }
    }
    return -1;
}
