#include "ListaEncadeada.h"

int main(){

    struct artilharia art;
    int qtdeJogadores, i;
    
    
    Lista* li = criaLista();

    printf("Digite a quantidade de jogadores a serem inseridos na lista\n");
    scanf("%d", &qtdeJogadores);
    
    while(qtdeJogadores != 0){
        fflush(stdin);
        printf("Digite os dados do jogador a ser inserido na lista\n");
        printf("Nome: ");
        gets(art.nome);
        printf("Clube: ");
        gets(art.clube);
        printf("Gols: ");
        scanf("%d", &art.qtdeGols);
        qtdeJogadores--;
        insereInicio(li,art);
    }

    system("cls");
    imprimeLista(li);

    liberaLista(li);
    system("pause");
    return 0;
}


