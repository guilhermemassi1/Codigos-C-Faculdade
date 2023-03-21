#include <stdio.h>
#include <stdlib.h>

/* Escreva uma função que receba como parâmetro um valor N e retorne o ponteiro
para uma matriz alocada dinamicamente contendo N linhas e N colunas. Essa
matriz deve conter o valor 1 na diagonal secundária e 0 nas demais posições.*/

int main(){
    int n, **m, i, j, k, x;
    printf("Digite o tamanho da matriz\n");
    scanf("%d", &n);
    m = (int **) malloc(n*sizeof(int *));
    for(i = 0; i < n; i++){
        m[i] = (int *) malloc((i+1)*sizeof(int));
        for(j = 0; j < n; j++){
            m[i][j] = n-j-i == 1 ? 1 : 0;
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