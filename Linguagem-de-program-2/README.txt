[LP2-192-PROJETO] - Elayni Enoly Sousa Franco. Matrícula 20170021234

INSTRUÇÕES DE USO

# Para compilar, em seu terminal digite: 

$ gcc servidor.c -o servidorbp -lpthread

# Abrir uma segunda aba do terminal ou uma nova janela e digitar: 

$ gcc cliente.c -o clientebp -lpthread

# Ignore os warnings que aparecerem.

# Para executar, primeiro o servidor: 

$ ./servidorbp [porta] [nome do bate-papo]

# O que será obtido:
Iniciando bate-papo [nome do bate-papo] na [porta]...

#Para executar o cliente, em aba/janela do terminal diferente:

$ ./clientebp [endereço IP] [porta] [apelido]

# O que será obtido:
Conectou ao [nome do batepapo] [IP] [porta]
[apelido]:

# Você pode conectar outros clientes, o servidor suportará até 10 conexões. Divirta-se.


Este trabalho usou como referência principal este site: https://beej.us/guide/bgnet/ 
No texto do site explica o uso de send() e recv() ao invés de read() e write().
As implementações de estrutura de dados (como lista encadeada, nó), foram possíveis por estar cursando a disciplina Estrutura de Dados ofertada no curso.  
Boa correção.
