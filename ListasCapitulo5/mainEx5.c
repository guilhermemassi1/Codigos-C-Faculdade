#include "Exercicio5.h"

int main(){

    int qtdeElementos, qtdeElementosLista2, i, dado;
    
    
    Lista* li1 = criaLista();
    Lista* li2 = criaLista();
    Lista* li3 = criaLista();

    printf("Digite a quantidade de elementos a serem inseridos na lista 1\n");
    scanf("%d", &qtdeElementos);
    
    while(qtdeElementos != 0){
        fflush(stdin);
        printf("Digite o dado a ser inserido na lista\n");
        scanf("%d", &dado);
        qtdeElementos--;
        insereInicio(li1,dado);
    }

    printf("Digite a quantidade de elementos a serem inseridos na lista 2\n");
    scanf("%d", &qtdeElementosLista2);
    
    while(qtdeElementosLista2 != 0){
        fflush(stdin);
        printf("Digite o dado a ser inserido na lista\n");
        scanf("%d", &dado);
        qtdeElementosLista2--;
        insereInicio(li2,dado);
    }

    li3 = concatenaListas(li1,li2);

    system("cls");
    imprimeLista(li1);
    imprimeLista(li2);
    imprimeLista(li3);

    liberaLista(li1);
    liberaLista(li2);
    liberaLista(li3);
    
    system("pause");
    return 0;
}