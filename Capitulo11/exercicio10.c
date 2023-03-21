#include <stdio.h>
#include <stdlib.h>

    /*Escreva uma função que receba um valor inteiro positivo N por parâmetro e retorne o
     ponteiro para um vetor de tamanho N alocado dinamicamente. Esse vetor
    deverá ter os seus elementos preenchidos com certo valor, também passado por
    parâmetro. Se N for negativo ou igual a zero, um ponteiro nulo deverá ser retornado.*/


int* criarVetor(int n, int x){
    int i;
    int *v = (int *) malloc(n * sizeof(int));

    if(n <= 0){
        printf("Erro\n");
        v = NULL;
    }

    for(i = 0; i < n; i++){
        v[i] = x;
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
    int n, i, *v = NULL, x;
    printf("Digite o tamanho do vetor\n");
    scanf("%d", &n);
    printf("Digite o valor para preeencher o vetor\n");
    scanf("%d", &x);
    v = criarVetor(n, x);
    if(v != NULL)
        printvet(v, n);
    return 0;
}