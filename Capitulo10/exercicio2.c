#include<stdio.h>

//Escreva um programa que contenha duas variáveis inteiras. Leia essas variáveis do
//teclado. Em seguida, compare seus endereços e exiba o conteúdo do maior endereço.

int main(){
    int x, y;

    printf("Digite um numero...\n");
    scanf("%d", &x);
    printf("Digite outro numero...\n");
    scanf("%d", &y);

    printf("Endereco de X(%d) = %d\n", x, &x);
    printf("Endereco de Y(%d) = %d\n", y, &y);

    if(&x > &y)
        printf("Maior X = %d\n", &x);
    else
        printf("Maior Y = %d\n",&y);
    return 0;
}