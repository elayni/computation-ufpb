#ifndef MAIN_CPP_
#define MAIN_CPP_

#include <iostream>
#include <typeinfo>

#include "menu.h"
#include "salvar_dados.h"

int main() {
    Database db = Database();

    Menu::menuPrincipal(db);

    return 0;
}

#endif
