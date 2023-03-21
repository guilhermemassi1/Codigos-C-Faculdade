#include<stdio.h>

//Escreva um programa que contenha duas variáveis inteiras. 
//Compare seus endereços e exiba o maior endereço.

int main(){

    int *x,*y;

    printf("X = %d\n", &x);

    printf("Y = %d\n", &y);
    if(&x > &y)
        printf("Maior X = %d\n", &x);
    else
        printf("Maior Y = %d\n",&y);

    return 0;
}