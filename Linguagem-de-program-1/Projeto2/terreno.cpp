#include "terreno.h"

using namespace std;

void Terreno::toString (void) {
    Imovel::toString();
}

Terreno::Terreno (void) {

}

Terreno::Terreno (int id, string tit, Endereco end, float val, float ar, bool alg, bool ven) :
      Imovel (id, tit, end, val, ar, alg, ven) {}
