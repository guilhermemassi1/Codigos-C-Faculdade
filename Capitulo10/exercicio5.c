#include<stdio.h>

//Crie um programa que contenha um array de inteiros contendo cinco elementos.
//Utilizando apenas aritmética de ponteiros, leia esse array do teclado e imprima o
//dobro de cada valor lido

int main(){
    
    int v[5], i, j, *p;

    printf("\nDigite os 5 elementos do vetor...\n");
    for(i = 0; i < 5; i++){
        scanf("%d", &(*(v+i)));
        printf("%d \n", (*(v + i) * 2));
    }
    return 0;
}