#include<stdio.h>

// Crie um programa que contenha uma matriz de float contendo três linhas e três colunas.
// Imprima o endereço de cada posição dessa matriz.


int main(){
    float m[3][3];
    int i,j;

    for(i = 0; i < 3; i++){
        for(j=0; j < 3 ; j++){
            printf("%d ", &m[i][j]);
        }
        printf("\n");
    }
    return 0;
}