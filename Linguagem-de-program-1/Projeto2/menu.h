#ifndef MENU_H
#define MENU_H

#include "data_base.h"

class Menu {
public:
    Menu();
    static void menuPrincipal(Database &db);
    static void subMenuUm(Database &db);
    static void subMenuDois(Database &db);
    static void subMenuTres(Database &db);
    static void subMenuQuatro(Database &db);
    static void subMenuCinco(Database &db);
    static void subMenuSeis(Database &db);

};

#endif
