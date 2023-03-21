#include <stdio.h>
#include <stdlib.h>

/*
Escreva um programa que leia um inteiro N e crie uma matriz alocada dinamicamente contendo
 N linhas e N colunas. Essa matriz deve conter o valor 0 na
diagonal principal, o valor 1 nos elementos acima da diagonal principal e o valor
−1 nos elementos abaixo da diagonal principal.
*/


int main(){
    int n, **m, i, j, k, x;
    printf("Digite o tamanho da matriz\n");
    scanf("%d", &n);
    m = (int **) malloc(n*sizeof(int *));
    for(i = 0; i < n; i++){
        m[i] = (int *) malloc((i+1)*sizeof(int));
        for(j = 0; j < n; j++){
            if(i == j)
                m[i][j] = 0;
            if(i > j)
                m[i][j] = -1;
            if(i < j)
                m[i][j] = 1;
        }
    }

    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }

    for (k = 0; k < n; k++){
        free(m[i]);
    }

    free(m);
    return 0;
}