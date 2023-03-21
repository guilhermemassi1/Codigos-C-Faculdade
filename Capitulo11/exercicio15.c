#include <stdlib.h>
#include <stdio.h>

/*
15) Escreva uma função que receba como parâmetro dois vetores, A e B, de tamanho
N cada. A função deve retornar o ponteiro para um vetor C de tamanho 
N alocado dinamicamente, em que C[i] = A[i] * B[i].*/

void scanvet(int *v, int n){
    int i;
    printf("Digite os elementos do vetor\n");
    for(i = 0;i < n; i++){
        scanf("%d", &v[i]);
    }
}

void printvet(int *v, int n){
    int i;
    for(i = 0;i < n; i++){
        printf("%d ", v[i]);
    }
}

int * multiplicaVetores(int *v1, int *v2, int n){
    int *v3 = (int *) malloc(n * sizeof(int)), i;
    for(i = 0; i < n; i++){
        v3[i] = v1[i] * v2[i];
    }
    return v3;
}

int main(){
    int *v1, *v2, x, *v3 = NULL;
    printf("Digite o tamanho dos vetores A e B\n");
    scanf("%d", &x);
    v1 = (int *) malloc(x * sizeof(int));
    v2 = (int *) malloc(x * sizeof(int));
    scanvet(v1,x);
    scanvet(v2,x);
 
    printf("\nVetor 1\n");
    printvet(v1,x);
    printf("\nVetor 2\n");
    printvet(v2,x);

    v3 = multiplicaVetores(v1, v2, x);
    printf("\nVetor 3\n");
    printvet(v3,x);
    return 0;
}