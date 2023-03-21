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
    float area, perimetro, diagonal, h, b;
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

    b = r.pontoInferiorDir.x - r.pontoSuperiorEsq.x;
	h = r.pontoSuperiorEsq.y - r.pontoInferiorDir.y;
	
	area = b * h;
	perimetro = 2 * (b + h);
	diagonal = sqrt(pow(b, 2) + pow(h, 2));
	
	printf("\n--- RESULTADOS ---");
	printf("\nArea: %.2f", area);
	printf("\nPerimetro: %.2f", perimetro);
	printf("\nDiagonal: %.2f\n\n", diagonal);

    return 0;
}
