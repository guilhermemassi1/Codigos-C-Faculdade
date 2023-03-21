#include<stdio.h>

/*2) Crie uma estrutura para representar as coordenadas de um ponto no plano (posições X e Y). 
Em seguida, declare e leia do teclado um ponto e exiba a distância
dele até a origem das coordenadas, isto é, a posição (0,0).*/

typedef struct{
    int x, y;
} Ponto;

int main(){
    Ponto p;
    /*LEITURA DOS DADOS*/
    printf("Digite as coordenadas X e Y de um ponto\n");
    printf("X = ");
    scanf("%d",&p.x);
    printf("\nY = ");
    scanf("%d",&p.y);

    /*IMPRESSAO DOS DADOS*/
    
    printf("\nPonto nas coordenadas (X,Y) = (%d , %d)\n",p.x,p.y);
}