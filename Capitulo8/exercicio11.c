#include<stdio.h>


/*11) Escreva um programa que contenha uma estrutura representando uma data válida. 
Essa estrutura deve conter os campos dia, mês e ano. Em seguida, leia duas datas e armazene nessa estrutura. 
Calcule e exiba o número de dias que decorreram
entre as duas datas.*/

typedef struct{
    int dia, mes, ano;
} data;

int main(){
    data d1, d2;

    printf("Digite a primeira data\n");
    printf("Dia\n");
    scanf("%d", &d1.dia);
    printf("Mes\n");
    scanf("%d", &d1.mes);
    printf("Ano\n");
    scanf("%d", &d1.ano);

    printf("Digite a segunda data\n");
    printf("Dia\n");
    scanf("%d", &d2.dia);
    printf("Mes\n");
    scanf("%d", &d2.mes);
    printf("Ano\n");
    scanf("%d", &d2.ano);


    printf("Data 1: %02d/ %02d/ %02d\n",d1.dia,d1.mes,d1.ano);
    printf("Data 2: %02d/ %02d/ %02d\n",d2.dia, d2.mes, d2.ano);
    
    return 0;
}