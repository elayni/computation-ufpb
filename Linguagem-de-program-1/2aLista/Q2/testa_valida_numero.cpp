#include "testa_valida_numero.h"

TestaValidaNumero::TestaValidaNumero() {}

void TestaValidaNumero::validaNumero(int num){
    try{
        if (num <= 0){
             throw (ValorAbaixoException());
        }
        if (num > 100 && num < 1000) {
            throw (ValorAcimaException());
        }
        if (num >= 1000){
            throw (ValorMuitoAcimaException());
        }

    }
     catch (ValorAbaixoException T) {
          T.ValorAbaixo();
     }
     catch (ValorAcimaException S){
         S.ValorAcima();
     }
     catch (ValorMuitoAcimaException Z){
            Z.ValorMuitoAcima();
     }

}
