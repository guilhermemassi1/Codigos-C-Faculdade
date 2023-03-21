#include "ListaEncadeada.h"

// Aloca a lista na memória
// Entrada: nenhuma
// Retorno: nenhum 
// Pre-condicao: nenhuma
// Pos-condicao: Lista é alocada
Lista* criaLista(){
    Lista* li= (Lista *) malloc(sizeof(Lista));
    if(li != NULL)
        *li = NULL;
    return li;
}

// Desaloca a lista da memória
// Entrada: Lista
// Retorno: nenhum 
// Pre-condicao: nenhuma
// Pos-condicao: Lista é desalocada
void liberaLista(Lista* li){
    if(li != NULL){
        Elem *no;
        while ((*li) != NULL)
        {
            no = *li;
            *li = (*li)->prox;
            free(no);
        }
        free(li);
    }
}

// Insere elemento no inicio da lista
// Entrada: Lista, Dados do Jogador(Nome, Clube, QtdeGols)
// Retorno: 1 se foi inserido ou 0 se nao 
// Pre-condicao: nenhuma
// Pos-condicao: Elemento é inserido no inicio da lista
int insereInicio(Lista* li, struct artilharia art){
    if(li == NULL)
        return 0;
    Elem* no;
    no = (Elem*) malloc(sizeof(Elem));
    if(no == NULL)
        return 0;
    strcpy(no->dados.nome, art.nome);
    strcpy(no->dados.clube, art.clube);
    //no->dados.nome = art.nome;
    //no->dados.clube = art.clube;
    no->dados.qtdeGols = art.qtdeGols;
    no->prox = (*li);
    *li = no;
    return 1;
}

// Remove elemento da lista
// Entrada: Lista, Nome do Jogador
// Retorno: 1 se foi removido ou 0 se nao 
// Pre-condicao: nenhuma
// Pos-condicao: Elemento é removido da lista
int removeElementoLista(Lista* li, char *nome){
    if(li == NULL)
        return 0;
    if((*li) == NULL)
        return 0;
    Elem *ant, *no = *li;
    while(no != NULL && no->dados.nome != nome){
        ant = no;
        no = no->prox;
    }
    if(no == NULL)
        return 0;

    if(no == *li)
        *li = no->prox;
    else
        ant->prox = no->prox;
    free(no);
    return 1;
}

// Imprime a lista
// Entrada: lista
// Retorno: sem retorno
// Pre-condicao: nenhuma
// Pos-condicao: Lista é exibida no terminal ou console
void imprimeLista(Lista* li){
    if(li == NULL)
        return;
    Elem* no = *li;
    printf("-------------------------------\n");
    while(no != NULL){
        printf("Nome: %s\n",no->dados.nome);
        printf("Clube: %s\n",no->dados.clube);
        printf("Gols: %d\n",no->dados.qtdeGols);
        printf("-------------------------------\n");
        no = no->prox;
    }
}