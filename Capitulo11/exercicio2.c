#include <stdio.h>
#include <stdlib.h>

/*Crie uma estrutura representando um aluno de uma disciplina. Essa estrutura
deve conter o número de matrícula do aluno, seu nome e as notas de três provas.
Escreva um programa que mostre o tamanho em byte dessa estrutura.
*/

struct aluno{
    int nrMatricula;
    char *nome;
    float nota1, nota2, nota3;
};

int main(){
    struct aluno a1;
    printf("Tamanho em byte da struct aluno: %d", sizeof(struct aluno));
    return 0;
}

