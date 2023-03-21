#include <stdio.h>
#include<stdlib.h>
#include <math.h>

/*4) Crie uma estrutura chamada Retângulo. Essa estrutura deverá conter o ponto
superior esquerdo e o ponto inferior direito do retângulo. Cada ponto é definido
por uma estrutura Ponto, a qual contém as posições X e Y. Faça um programa que
declare e leia uma estrutura Retângulo e exiba a área e o comprimento da diagonal
e o perímetro desse retângulo*/

typedef struct{
    float x, y;
} Ponto;

typedef struct{
    Ponto pontoSuperiorEsq, pontoInferiorDir;
} Retangulo;

int main(){
    Retangulo r;
    Ponto p;
    /*LEITURA DOS DADOS*/
    
    printf("=========Digite as coordenadas do Retangulo===========");
    printf("\nPonto Superior Esquerdo\n");
    printf("X = ");
    scanf("%f",&r.pontoSuperiorEsq.x);
    printf("\nY = ");
    scanf("%f",&r.pontoSuperiorEsq.y);
    
    printf("\nPonto Inferior Direito\n");
    printf("X = ");
    scanf("%f",&r.pontoInferiorDir.x);
    printf("\nY = ");
    scanf("%f",&r.pontoInferiorDir.y);

    printf("\n--- PONTO ---");
	printf("\nCoordenada x: ");
	scanf("%f", &p.x);
	printf("Coordenada y: ");
	scanf("%f", &p.y);
	
	if ((p.x >= r.pontoSuperiorEsq.x && p.x <= r.pontoInferiorDir.x) && (p.y <= r.pontoSuperiorEsq.y && p.y >= r.pontoInferiorDir.y)) 
		printf("\nO ponto esta dentro do retangulo.\n\n");
	else printf("\nO ponto nao esta dentro do retangulo.\n\n");

    return 0;
}
