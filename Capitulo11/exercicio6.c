#include <stdio.h>
#include <stdlib.h>

/* Escreva um programa que aloque dinamicamente uma matriz de inteiros. As dimensões da matriz deverão ser 
lidas do usuário. Em seguida, escreva uma função
que receba um valor e retorne 1, caso o valor esteja na matriz, ou retorne 0, no
caso contrário. */

int verificaNumNaMatriz(int **m,int n, int x){
    int i, j, retorno = 0;
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if(m[i][j] == x)
                retorno = 1;
        }
    }
    return retorno;
}

int main(){
    int n, **m, i, j, k, x;
    printf("Digite o tamanho da matriz\n");
    scanf("%d", &n);
    m = (int **) malloc(n*sizeof(int *));
    for(i = 0; i < n; i++){
        m[i] = (int *) malloc((i+1)*sizeof(int));
        for(j = 0; j < n; j++){
            scanf("%d", &m[i][j]);
        }
    }

    printf("\nDigite o numero para buscar na matriz\n");
    scanf("%d", &x);
    if(verificaNumNaMatriz(m, n, x) == 1){
        printf("\nNumero esta na matriz\n");
    }
    else{
        printf("\nNumero nao esta na matriz\n");
    }

    for (k = 0; k < n; k++){
        free(m[i]);
    }

    free(m);
    return 0;
}