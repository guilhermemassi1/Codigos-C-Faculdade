#include <stdio.h>
#include <stdlib.h>

    /*7Faça uma função que retorne o ponteiro para um vetor de N elementos inteiros
    alocados dinamicamente. O array deve ser preenchido com valores de 0 a N − 1.*/
    
int* criarVetor(int n){
    int i;
    int *v = (int *) malloc(n * sizeof(int));

    if(v == NULL){
        printf("Erro\n");
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
    printvet(v, n);
    return 0;
}