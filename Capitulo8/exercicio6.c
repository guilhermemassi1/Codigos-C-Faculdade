#include<stdio.h>

/*6) Crie uma estrutura representando um aluno de uma disciplina. Essa estrutura
deve conter o número de matrícula do aluno, seu nome e as notas de três provas.
Agora, escreva um programa que leia os dados de cinco alunos e os armazena nessa
estrutura. Em seguida, exiba o nome e as notas do aluno que possui a maior média
geral dentre os cinco.*/

typedef struct{
    int matricula;
    char nome[50];
    float prova[3];
} Aluno;

int maiorMedia(Aluno a[]) {
	float media, mediaMaior=0;
	int i, I, j;
	
	for (i=0; i<3; i++) {
		
		media = 0;
		
		for (j=0; j<3; j++) 
			media += a[i].prova[j];
			
		media /= 3;
			
		if (media > mediaMaior) { 
			mediaMaior = media; 
			I = i; 
		} 		 
	}
	
	return I;
}

int main(){
    Aluno a[5];
    int i, j;

    for(i = 0; i < 5; i++){
        printf("\n--- ALUNO %d ---", (i+1));
		
		printf("\nMatricula: ");
		scanf("%d", &a[i].matricula);
		
		printf("Nome: ");
		fflush(stdin);
		gets(a[i].nome);

        for (j=0; j<3; j++) {
			printf("Prova %d: ", (j+1));
			scanf("%d", &a[i].prova[j]);
		}
    }

    i = maiorMedia(a);
	
	printf("\n--- MAIOR MEDIA ---");
	printf("\nAluno: %s.\n\n", a[i].nome);

    return 0;
}