#include "menu.h"
#include "salvar_dados.h"
#include <iostream>

void Menu::menuPrincipal(Database &db){

while(1){
    std::cout << endl;
    std::cout << "::::::::::::::::IMOBILIARIA COPLANAR::::::::::::::::" << endl;
    std::cout << "0 - Cadastrar um imovel" << endl;
    std::cout << "1 - Listar imoveis" << endl;
    std::cout << "2 - Buscar imovel" << endl;
    std::cout << "3 - Remover um imovel" << endl;
    std::cout << "4 - Editar um imovel" << endl;
    std::cout << "5 - Salvar os dados" << endl;
    std::cout << "6 - Sair do programa" << endl;

    int op;
    std::cin >> op;

    switch (op) {
        case 0:
            Menu::subMenuUm(db);
            break;
        case 1:
            Menu::subMenuDois(db);
            break;
        case 2:
            Menu::subMenuTres(db);
            break;
        case 3:
            Menu::subMenuQuatro(db);
            break;
        case 4:
            Menu::subMenuCinco(db);
            break;
        case 5:
            Menu::subMenuSeis(db);
            break;
        case 6:
            exit(0);
            break;
    }
}

}
void Menu::subMenuUm(Database &db){
    std::cout << endl;
    std::cout << "Qual imovel voce deseja registrar?" << endl;
    std::cout << "0 - Terreno" << endl;
    std::cout << "1 - Casa" << endl;
    std::cout << "2 - Apartamento" << endl;
    std::cout << "3 - Voltar ao menu principal" << endl;
    int op;
    std::cin >> op;
    bool menu = db.opcaoDeRegistro (op);
    if(menu){
        return;
    }

}
void Menu::subMenuDois(Database &db){
    std::cout << endl;
    std::cout << "Qual imovel voce deseja listar?" << endl;
    std::cout << "0 - Todos" << endl; //exibir apenas o título do imovel
    std::cout << "1 - Casa" << endl;
    std::cout << "2 - Apartamento" << endl;
    std::cout << "3 - Terreno" << endl;
    std::cout << "4 - Imoveis para alugar" << endl;
    std::cout << "5 - Imoveis para vender" << endl;
    std::cout << "6 - Voltar ao menu principal" << endl;
    int op;
    std::cin >> op;

    Imovel im;
    bool menu = db.listarImoveis(op,im);
    if(menu){
        return;
    }

}
void Menu::subMenuTres(Database &db){
    std::cout << endl;
    std::cout << "Qual imovel voce deseja buscar?" << endl;
    std::cout << "0 - Por bairro" << endl; //exibir apenas o título do imovel
    std::cout << "1 - Por cidade" << endl;
    std::cout << "2 - Por titulo" << endl;
    std::cout << "3 - Por valor" << endl;
    std::cout << "4 - Voltar ao menu principal" << endl;
    int op;
    std::cin >> op;

    switch (op) {
        case 0:{
            std::cout << "Digite o bairro do imovel: " << endl;
            std::string tmp;
            std::cin >> tmp;
            int index = db.buscaPorBairro(tmp);
            if(index == -1)
                std::cout << "Imovel nao encontrado." << endl;
        }
            break;
        case 1:{
            std::cout << "Digite a cidade do imovel: " << endl;
            std::string tmp;
            std::cin >> tmp;
            int index = db.buscaPorCidade(tmp);
            if(index == -1)
                std::cout << "Imovel nao encontrado." << endl;
        }
            break;
        case 2:{
            std::cout << "Digite o titulo do imovel: " << endl;
            std::string tmp;
            std::cin >> tmp;
            int index = db.buscaPorTitulo(tmp);
            if(index == -1)
                std::cout << "Imovel nao encontrado." << endl;
        }
            break;
        case 3:{
            std::cout << "Imoveis com valor ate: " << endl;
            float tmp;
            std::cin >> tmp;
            int index = db.buscaPorValor(tmp);
            if(index == -1)
                std::cout << "Imovel nao encontrado." << endl;
        }
            break;
        case 4:
            return;
            break;
    }
}
void Menu::subMenuQuatro(Database &db){
    std::cout << "Digite o titulo do imovel: " << endl;
    std::string tmp;
    std::cin >> tmp;
    int index = db.buscaPorTitulo(tmp);
    if(index == -1)
        std::cout << "Imovel nao encontrado." << endl;
    else{
        db.mostraImovel (index);
        std::cout << "Voce deseja remover este imovel?(S/N)" << endl;
        std::cin >> tmp;
        if(tmp == "S"){
            db.removeImovel(index);
            return;
        }else
        return;
    }

}
void Menu::subMenuCinco(Database &db){
    std::cout << "Digite o titulo do imovel: " << endl;
    std::string tmp;
    std::cin >> tmp;
    int index = db.buscaPorTitulo(tmp);
    if(index == -1)
        std::cout << "Imovel nao encontrado." << endl;
    else{
        db.mostraImovel (index);
        std::cout << "Voce deseja editar este imovel?(S/N)" << endl;
        std::cin >> tmp;
        if(tmp == "S"){
            db.removeImovel(index);
            std::cout << endl;
            std::cout << "Selecione o tipo de imovel:" << endl;
            std::cout << "0 - Terreno" << endl;
            std::cout << "1 - Casa" << endl;
            std::cout << "2 - Apartamento" << endl;
            std::cout << "3 - Voltar ao menu principal" << endl;
            int op;
            std::cin >> op;
            bool menu = db.opcaoDeRegistro (op);
        }else
        return;
    }
}
void Menu::subMenuSeis(Database &db){
    SalvarDados::salvarListaImoveis(db.db);
}
