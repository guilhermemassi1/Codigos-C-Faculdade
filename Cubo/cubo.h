typedef struct cubo Cubo;


/*Exercicio 1 - Um tipo abstrato de dados, ou TAD, é um conjunto de dados estruturados e as operações que 
podem ser executadas sobre esses dados.*/

/*Exercicio 2 - O uso de um TAD traz consigo uma série de vantagens:

■Encapsulamento: ao ocultarmos a implementação, fornecemos um conjunto de operações possíveis para o TAD. 
Isso é tudo o que o usuário precisa saber para fazer uso do TAD. O usuário não precisa de nenhum conhecimento 
técnico de como a implementação trabalha para usá-lo, tornando o seu uso muito mais fácil.

■Segurança: usuário não tem acesso direto aos dados. Isso evita que ele manipule os dados de maneira imprópria.

■Flexibilidade: podemos alterar o TAD sem alterar as aplicações que o utilizam. De fato, 
podemos ter diferentes implementações de um mesmo TAD desde que todos respeitem a mesma interface. 
Assim, podemos usar a implementação mais eficiente para determinada situação.

■Reutilização: a implementação da TAD é feita em um módulo diferente do programa do usuário.*/

Cubo* cubo_cria(int aresta);
void cubo_libera(Cubo* c);
int cubo_acessa(Cubo* c, int* aresta);
int cubo_atribui(Cubo* c, int aresta);
float cubo_area(Cubo *c);
float cubo_volume(Cubo *c);
