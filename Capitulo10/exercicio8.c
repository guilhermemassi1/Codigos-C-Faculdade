#include<stdio.h>


/* Crie uma função que receba dois parâmetros: um vetor e um valor do mesmo tipo
do vetor. A função deverá preencher os elementos de vetor com esse valor. Não
utilize índices para percorrer o vetor, apenas aritmética de ponteiros.*/

void scanvet(int *v, int valor){
    int i = 0;
    while(i < 5){
        *v = valor;
        v++;
        i++;
    }
}

int main(){
    int v[5], i;
    scanvet(v, 2);
    for(i = 0; i < 5; i++){
        printf("v[%d] = %d\n", i+1, *(v + i));
    }
    return 0;
}