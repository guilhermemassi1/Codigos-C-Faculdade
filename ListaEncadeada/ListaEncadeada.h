#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Complexidades
1) Inserção no início: essa operação envolve apenas a manipulação de alguns ponteiros, de modo que a 
sua complexidade é O(1).

2) Remoção de um elemento específico: essa operação envolve a busca pelo elemento a ser removido, que pode estar no
início, no meio ou no final. Assim, no pior caso, a sua complexidade é O(N) (remoção do final).

3) Consulta: a operação de consulta envolve a busca de um elemento, o que pode ser no início, no meio ou no final. 
Assim, no pior caso, a sua complexidade é O(N) (último elemento).
*/

struct artilharia{
    char nome[30];
    char clube[30];
    int qtdeGols;
};

struct elemento{
    struct artilharia dados;
    struct elemento *prox;
};

typedef struct elemento Elem;
typedef struct elemento* Lista;

// Aloca a lista na memória
// Entrada: nenhuma
// Retorno: nenhum 
// Pre-condicao: nenhuma
// Pos-condicao: Lista é alocada
Lista* criaLista();

// Desaloca a lista da memória
// Entrada: Lista
// Retorno: nenhum 
// Pre-condicao: nenhuma
// Pos-condicao: Lista é desalocada
void liberaLista(Lista* li);

// Insere elemento no inicio da lista
// Entrada: Lista, Dados do Jogador(Nome, Clube, QtdeGols)
// Retorno: 1 se foi inserido ou 0 se nao 
// Pre-condicao: nenhuma
// Pos-condicao: Elemento é inserido no inicio da lista
int insereInicio(Lista* li, struct artilharia art);

// Remove elemento da lista
// Entrada: Lista, Nome do Jogador
// Retorno: 1 se foi removido ou 0 se nao 
// Pre-condicao: nenhuma
// Pos-condicao: Elemento é removido da lista
int removeElementoLista(Lista* li, char *nome);

// Imprime a lista
// Entrada: lista
// Retorno: sem retorno
// Pre-condicao: nenhuma
// Pos-condicao: Lista é exibida no terminal ou console
void imprimeLista(Lista* li);
