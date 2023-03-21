#include <stdio.h>
#include <stdlib.h>

/* Elabore um programa que leia do usuário o tamanho de um vetor a ser lido. Em
seguida, faça a alocação dinâmica desse vetor. Por fim, leia o vetor do usuário e o
imprima.
*/

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
    v = (int *) malloc(x * sizeof(int));
    printf("Digite os elementos do vetor\n");
    for(i = 0; i < x; i++){
        scanf("%d", &v[i]);
    }

    printvet(v, x);
    free(v);
    return 0;
}