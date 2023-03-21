#include<stdio.h>
#include<string.h>

/*9) Crie uma estrutura representando um atleta. Essa estrutura deve conter o nome
do atleta, seu esporte, idade e altura. Agora, escreva um programa que leia os
dados de cinco atletas. Calcule e exiba os nomes do atleta mais alto e do mais
velho.*/

typedef struct{
    char nome[50], esporte[50];
    int idade;
    float altura;
} Atleta;

int main(){
    Atleta a[5];
    int i, j, maisVelho, maisAlto;
    char nomeMaisVelho[50], nomeMaisAlto[50];
    
    for(i = 0; i < 5; i++){
        printf("Atleta %d",(i+1));
        fflush(stdin);
        printf("\nDigite o nome do atleta\n");
        gets(a[i].nome);
        printf("\nIdade: ");
        scanf("%d", &a[i].idade);
        fflush(stdin);
        printf("\nEsporte: ");
        gets(a[i].esporte);
        printf("\nAltura: ");
        scanf("%f", &a[i].altura);
    }
    
    maisVelho =  a[0].idade;
    maisAlto = a[0].altura;

    for(j = 0; j < 5; j++){
        if(maisVelho <= a[j].idade)
            strcpy(nomeMaisVelho, a[j].nome);
        if(maisAlto <= a[j].altura)
           strcpy(nomeMaisAlto, a[j].nome);
    }

    printf("Mais velho: %s\n", nomeMaisVelho);
    printf("Mais alto: %s\n", nomeMaisAlto);
    return 0;
}