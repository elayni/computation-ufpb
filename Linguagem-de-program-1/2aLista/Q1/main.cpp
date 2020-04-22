#include <iostream>
#include "cirurgiao.h"
#include "ginecologista.h"
#include "oftalmologista.h"
#include "otorrinolaringologista.h"

int main(void){
	int a;
    Medico medico = Medico("Pedro", 1.70, 65.5);
    Cirurgiao pacienteUm;
    Ginecologista pacienteDois;
    Oftalmologista pacienteTres;
    Otorrinolaringologista pacienteQuatro;

   // medico = Medico("Pedro", 1.70, 65.5);
    pacienteUm.Cirurgia();
    pacienteDois.Consulta();
    pacienteTres.Consulta();
    pacienteQuatro.Consulta();

	cin >> a; // Este cin foi utilizado para segurar a janela de execução no Visual Studio, é dispensável para o programa.

    return 0;
}
