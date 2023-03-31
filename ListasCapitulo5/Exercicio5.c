#include "Exercicio5.h"

Lista* criaLista(){
    Lista* li= (Lista *) malloc(sizeof(Lista));
    if(li != NULL)
        *li = NULL;
    return li;
}

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

int insereInicio(Lista* li, int dado){
    if(li == NULL)
        return 0;
    Elem* no;
    no = (Elem*) malloc(sizeof(Elem));
    if(no == NULL)
        return 0;
    no->dado = dado;
    no->prox = (*li);
    *li = no;
    return 1;
}

void imprimeLista(Lista* li){
    if(li == NULL)
        return;
    Elem* no = *li;
    printf("-------------------------------\n");
    while(no != NULL){
        printf("%d ",no->dado);
        no = no->prox;
    }
    printf("\n");
}

Lista* concatenaListas(Lista* li1, Lista* li2){
    Lista* li3 = criaLista();
    Elem* no1 = *li1;
    Elem* no2 = *li2;
    while(no1 != NULL)
    {
        insereInicio(li3,no1->dado);
        no1 = no1->prox;
    }
    while(no2 != NULL){
        insereInicio(li3,no2->dado);
        no2 = no2->prox;
    }
    return li3;
}