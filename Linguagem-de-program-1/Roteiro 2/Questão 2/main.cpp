/**

⚉ Em seguida, crie o um programa com o método main que cria dois objetos  do tipo Pessoa e
configura os valores de nome, endereço e telefone desses objetos.*/

#include <iostream>
#include "pessoa.h"
#include "endereco.h"

int main(){
    Endereco endereco;
    Pessoa pessoa;
    endereco = Endereco();
    endereco.setRua("rua");
    endereco.setNumero("num");
    endereco.setBairro("bairro");
    endereco.setCidade("cidade");
    endereco.setEstado("estado");
    endereco.setCep("cep");
    pessoa = Pessoa();
    pessoa.setNome("nome");
    pessoa.setEndereco(endereco);
    pessoa.setTelefone("tel");

    std::cout << pessoa.toString() << '\n';

    return 0;
}
