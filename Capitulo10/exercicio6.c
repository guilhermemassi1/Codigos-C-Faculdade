#include<stdio.h>

/* Crie um programa que contenha um array contendo cinco elementos inteiros.
Leia esse array do teclado e imprima o endereço das posições contendo valores
pares.*/

int main(){

    int v[5], i;

    printf("\nDigite os 5 elementos do vetor...\n");
    for(i = 0; i < 5; i++){
        scanf("%d", &v[i]);
        if(v[i] % 2 == 0)
            printf("%d\n", &v[i]);
    }
    return 0;
}