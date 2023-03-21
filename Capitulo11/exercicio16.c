#include <stdio.h>
#include <stdlib.h>

/*
Escreva uma função que receba como parâmetro uma matriz A contendo N linhas
e N olunas, e um vetor B de tamanho N. A função deve retornar o ponteiro para
um vetor C de tamanho N alocado dinamicamente, em que C é o produto da
matriz A pelo vetor B.
*/

void scanMatriz(int **m, int n){
    int i, j;
    printf("Digite os elementos da Matrizes\n");
    for(i = 0; i < n; i++){
        m[i] = (int *) malloc((i+1)*sizeof(int));
        for(j = 0; j < n; j++){
            scanf("%d", &m[i][j]);
        }
    }
}

void printMatriz(int **m, int n){
    int i, j;
    printf("=============Imprimindo Matriz==============\n");
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
}

/*int ** produtoMatrizes(int **m1, int **m2, int n){
    int **m3, i, j, aux;
    for(i = 0; i < n; i++){
        m3[i] = (int *) malloc((i+1)*sizeof(int));
        for(j = 0; j < n; j++){
            aux = m1[i][j] * m2[i][j]; 
            m3[i][j] = aux;
            printf("\n%d", m3[i][j]);
        }
    }
    return m3;
}
*/

int main(){
    int n, **m, **m2, **m3, k, x;
    
    printf("Digite o tamanho das matrizes\n");
    scanf("%d", &n);
    
    m = (int **) malloc(n*sizeof(int *));
    m2 = (int **) malloc(n*sizeof(int *));
    m3 = (int **) malloc(n*sizeof(int *));

    scanMatriz(m, n);
    scanMatriz(m2, n);

   //m3 = produtoMatrizes(m, m2, n);

    printMatriz(m, n);
    printMatriz(m2, n);
    //printMatriz(m3, n);

    for (k = 0; k < n; k++){
        free(m[k]);
    }

    free(m);
    return 0;
}