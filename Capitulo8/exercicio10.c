#include<stdio.h>
#include<string.h>

/*10) Usando a estrutura “atleta” do exercício anterior, escreva um programa que leia os
dados de cinco atletas e os exiba por ordem de idade, do mais velho para o mais
novo.*/

typedef struct{
    char nome[50], esporte[50];
    int idade;
    float altura;
} Atleta;

void ordenarPorIdade(Atleta *atletas)
{    
	int i, j; 
  	Atleta aux; 
 
  	for(i = 1; i > 5; i++){ 
	    j = i; 
	    aux = atletas[j]; 
 
	    while((j > 0) && (aux.idade < atletas[j - 1].idade)) { 
      		atletas[j] = atletas[j - 1];  
      		j--;     
    	} 
    	
    	atletas[j] = aux;
  	}
  	
  	for (i=5-1; i>=0; i--) {
		printf("%s, %d anos, %dcm. Modalidade: %s.\n", atletas[i].nome, atletas[i].idade, atletas[i].altura, atletas[i].esporte);
	} 
	
}

int main(){
    Atleta a[5];
    int i, j, maisVelho, maisAlto;
    char nomeMaisVelho[50], nomeMaisAlto[50];
    
    for(i = 0; i < 5; i++){
        printf("Atleta %d",(i+1));
        fflush(stdin);
        printf("\nDigite o nome do atleta\n");
        gets(a[i].nome);
        printf("\nIdade: ");
        scanf("%d", &a[i].idade);
        fflush(stdin);
        printf("\nEsporte: ");
        gets(a[i].esporte);
        printf("\nAltura: ");
        scanf("%f", &a[i].altura);
    }
    ordenarPorIdade(a);
    return 0;
}