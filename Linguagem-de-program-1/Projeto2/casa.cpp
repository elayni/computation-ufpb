#include "casa.h"

using namespace std;

void Casa::toString (void) {
    Imovel::toString();
}
Casa::Casa (){

};
Casa::Casa (unsigned int qrt, unsigned int pvm, float act) :
    quartos (qrt),
    pavimentos (pvm),
    arConstruida (act) {}

Casa::Casa (int id, unsigned int qrt, unsigned int pvm, float act,
      string tit, Endereco end, float val, float ar, bool alg, bool ven) :
      Imovel (id, tit, end, val, ar, alg, ven),
      quartos (qrt),
      pavimentos (pvm),
      arConstruida (act) {}

unsigned int Casa::getPavimentos(){
    return pavimentos;
};
void Casa::setPavimentos(unsigned int pvm){
    pavimentos = pvm;
};
unsigned int Casa::getQuartos(){
    return quartos;
};
void Casa::setQuartos(unsigned int qrt){
    quartos = qrt;
};
float Casa::getArConstruida(){
    return arConstruida;
};
void Casa::setArConstruida(float ar){
    arConstruida = ar;
};
