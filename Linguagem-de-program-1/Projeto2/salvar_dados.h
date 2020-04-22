#ifndef SALVAR_DADOS_H
#define SALVAR_DADOS_H

#include "data_base.h"
#include <fstream>


class SalvarDados {
    public:
    SalvarDados();
    static void salvarListaImoveis (list<Imovel> &db);
    //std::list<Imovel*> recuperaListaImoveis (void);

};

#endif
