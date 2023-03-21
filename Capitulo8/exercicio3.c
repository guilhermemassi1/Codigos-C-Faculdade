#include<stdio.h>

/*3) Crie uma estrutura para representar as coordenadas de um ponto no plano (posições X e Y).
Em seguida, declare e leia do teclado dois pontos e exiba a distância
entre eles.*/

typedef struct{
    int x, y;
} Ponto;

int main(){
    Ponto p1, p2;
    /*LEITURA DOS DADOS*/
    printf("Digite as coordenadas X e Y do Ponto 1\n");
    printf("X = ");
    scanf("%d",&p1.x);
    printf("\nY = ");
    scanf("%d",&p1.y);

    printf("\nDigite as coordenadas X e Y do Ponto 2\n");
    printf("X = ");
    scanf("%d",&p2.x);
    printf("\nY = ");
    scanf("%d",&p2.y);

    /*IMPRESSAO DOS DADOS*/
    
    system("cls");
    printf("\nPonto 1 nas coordenadas (X,Y) = (%d , %d)\n",p1.x,p1.y);
    printf("\nPonto 2 nas coordenadas (X,Y) = (%d , %d)\n",p2.x,p2.y);
    printf("\nDistancia entre os Pontos 1 e 2 = (%d , %d)\n", p2.x - p1.x, p2.y - p1.y);

}