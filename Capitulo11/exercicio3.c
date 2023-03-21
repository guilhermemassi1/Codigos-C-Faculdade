#include <stdio.h>
#include <stdlib.h>

/*Crie uma estrutura chamada Cadastro. Essa estrutura deve conter o nome, a idade
e o endereço de uma pessoa. Agora, escreva uma função que receba um inteiro positivo N e retorne 
o ponteiro para um vetor de tamanho N, alocado dinamicamente, dessa estrutura. 
Solicite também que o usuário digite os dados desse vetor dentro da função.*/

struct cadastro{
    char *nome, *endereco;
    int idade;
};

struct cadastro* criarCadastro(int n){
    int i;
    struct cadastro *c = (struct cadastro *) malloc(n * sizeof(struct cadastro));

    if(c == NULL){
        printf("Erro\n");
    }

    for(i = 0;i < n; i++){
        printf("Cadastro [%d]\n", i+1);
        fflush(stdin);
        printf("Nome: ");
        gets(c[i].nome);
        printf("Endereco: ");
        gets(c[i].endereco);
        printf("Idade: ");
        scanf("%d", &c[i].idade);
    }
    return c;
}

int main(){
    int n, i;
    struct cadastro *c = NULL;
    printf("Quantos cadastros devem ser realizados?\n");
    scanf("%d", &n);
    c = criarCadastro(n); 

    printf("\n================Mostrando Cadastro================\n"); 
    
    for(i = 0; i < n; i++){
        printf("Cadastro[%d]\n", i+1);
        printf("Nome: %s\n", c[i].nome);
        printf("Idade: %d\n", c[i].idade);
        printf("Endereco: %s\n", c[i].endereco);
    }
    free(c);
    return 0;
}

