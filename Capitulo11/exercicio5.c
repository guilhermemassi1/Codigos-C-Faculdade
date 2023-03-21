#include <stdio.h>
#include <stdlib.h>

/* Faça um programa que leia um valor inteiro N não negativo. Se o valor de N for
inválido, o usuário deverá digitar outro até que ele seja válido (ou seja, positivo).
Em seguida, leia um vetor V contendo N posições de inteiros, em que cada valor
deverá ser maior ou igual a 2. Esse vetor deverá ser alocado dinamicamente. */


void printvet(int *v, int n){
    int i;
    printf("\n==========Imprimindo o vetor===========\n");
    for(i = 0; i < n; i++){
        printf("%d ", v[i]);
    }
}

int main(){
    int x, *v, i;
    printf("Digite o tamanho do vetor\n");
    scanf("%d", &x);
    while(x < 0){
        printf("\nTamanho invalido. Digite novamente\n");
        scanf("%d", &x);
    }

    v = (int *) malloc(x * sizeof(int));
    printf("Digite os elementos do vetor\n");
    for(i = 0; i < x; i++){
        scanf("%d", &v[i]);
        if(v[i] < 2){
            printf("Numero menor que 2. Digite novamente\n");
            scanf("%d",&v[i]);
        }
    }

    printvet(v, x);
    free(v);
    return 0;
}