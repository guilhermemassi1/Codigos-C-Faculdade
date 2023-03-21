#include<stdio.h>

//Crie um programa que contenha um array de float contendo 10 elementos. 
//Imprima o endereço de cada posição desse array.

int main(){
    float v[10] = {10,23,42,15,21,12,4,3,1,5};
    int i, j;
    printf("Imprimindo vetor...\n");
    for(i = 0 ; i < 10; i++){
        printf("v[%d] = %.1f ",i,v[i]);
    }
    printf("\n\nImprimindo enderecos dos elementos do vetor...\n");
    for(j = 0; j < 10; j++){
        printf("v[%d] = %d ", j, &v[j]);
    }

    return 0;
}