#include<stdio.h>
#include<string.h>

/*1) Implemente um programa que leia o nome, a idade e o endereço de uma pessoa e
armazene esses dados em uma estrutura. Em seguida, imprima na tela os dados da
estrutura lida*/

typedef struct{
    char nome[50];
    int idade;
    char endereco[50];
}pessoa;

int main(){
    pessoa p;

    /*LEITURA DOS DADOS */
    printf("==========Digite os dados de uma pessoa===========\n");
    printf("Nome: ");
    gets(p.nome);
    printf("\nIdade: ");
    scanf("%d", &p.idade);
    fflush(stdin);
    printf("\nEndereco: ");
    gets(p.endereco);
    printf("\n==================================\n");

    /*DADOS IMPRIMIDOS NO CONSOLE*/
    system("cls");
    printf("\n==============Dados da Pessoa===================\n");
    printf("Nome: %s\n", p.nome);
    printf("Nome: %d\n", p.idade);
    printf("Nome: %s\n", p.endereco);
    
}
