#include<stdio.h>

/*Crie uma função que receba como parâmetro um vetor e o imprima. Não utilize
índices para percorrer o vetor, apenas aritmética de ponteiros.*/

void imprimevet(int *v){
    int i = 0;
    while(i < 5){
        printf("v[%d] = %d \n", i+1, *(v + i));
        i++;
    }
}

int main(){
    int v[5] = {1, 2, 3, 4, 5};
    imprimevet(v);
    return 0;
}