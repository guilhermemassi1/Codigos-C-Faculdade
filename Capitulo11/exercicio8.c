#include <stdio.h>
#include <stdlib.h>

    /* Escreva uma função que receba um valor inteiro positivo N por parâmetro e retorne o 
    ponteiro para um vetor de tamanho N alocado dinamicamente. Se N for
    negativo ou igual a zero, um ponteiro nulo deverá ser retornado.*/


int* criarVetor(int n){
    int i;
    int *v = (int *) malloc(n * sizeof(int));

    if(n <= 0){
        printf("Erro\n");
        v = NULL;
    }

    for(i = 0; i < n; i++){
        v[i] = i;
    }
    return v;
}

void printvet(int *v, int n){
    int i;
    printf("\n==========Imprimindo o vetor===========\n");
    for(i = 0; i < n; i++){
        printf("%d ", v[i]);
    }
}

int main(){
    int n, i, *v = NULL;
    printf("Digite o tamanho do vetor\n");
    scanf("%d", &n);
    v = criarVetor(n);
    if(v != NULL)
        printvet(v, n);
    return 0;
}