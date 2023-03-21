#include <stdio.h>
#include <stdlib.h>

/* Escreva um programa que mostre o tamanho em byte que cada tipo de dados
ocupa na memória: char, int, float, double.
*/

int main(){
    printf("Tamanho em byte de char: %d\n", sizeof(char));
    printf("Tamanho em byte de int: %d\n", sizeof(int));
    printf("Tamanho em byte de float: %d\n", sizeof(float));
    printf("Tamanho em byte de double: %d\n", sizeof(double));
    return 0;
}