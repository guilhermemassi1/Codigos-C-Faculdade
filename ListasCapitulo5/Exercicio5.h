#include <stdio.h>
#include <stdlib.h>

/*Exercicio 5 feito apenas para Lista Encadeada Simples*/

/*
1)Explique o que é a alocação sequencial de memória para um conjunto de elementos.

Alocação de memória, consiste no processo de solicitar/utilizar memória durante o 
processo de execução de um programa de computador


2)Descreva a diferença entre alocação sequencial e alocação encadeada.

Na alocação encadeada, é preciso que os elementos sejam alocados fisicamente na memória.
A alocação sequencial não é necessariamente alocada em sequência fisicamente. 
Na alocação sequencial, além da lógica sequencial, a lista também é alocada fisicamente 
em sequência.

3)Enumere as vantagens e desvantagens de se utilizar alocação encadeada para um conjunto de elementos.

Desvantagens
    1 - Acesso indireto aos elementos
    2 - Tempo variável para acessar os elementos (depende da
    posição do elemento)
    3 - Gasto de memória maior pela necessidade de um novo campo
    para o ponteiro
Vantagens
    1 - A inserção e remoção de elementos podem ser feitas sem
    deslocar os itens seguintes da lista
    2 - Não há necessidade de previsão do número de elementos da
    lista; o espaço necessário é alocado em tempo de execução
    3 - Facilita o gerenciamento de várias listas

4)Descreva a diferença entre alocação estática e alocação dinâmica.

Alocação Estática: o espaço de memória é alocada no momento da compilação do programa. 
É necessário definir do número máximo de elementos que a lista irá possuir;

Alocação Dinâmica: o espaço de memória é alocado em tempo de execução. A lista cresce à
medida que novos elementos são armazenados, e diminui à medida que elementos são removidos.

*/

struct elemento{
    int dado;
    struct elemento *prox;
};

typedef struct elemento Elem;
typedef struct elemento* Lista;

Lista* criaLista();
void liberaLista(Lista* li);
int insereInicio(Lista* li, int dado);
void imprimeLista(Lista* li);
Lista* concatenaListas(Lista* li1, Lista* li2);
