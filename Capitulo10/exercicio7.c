#include<stdio.h>

/*Elabore uma função que receba duas strings como parâmetros e verifique se a segunda string ocorre 
dentro da primeira. Use aritmética de ponteiros para acessar os caracteres das strings
*/

int verifica(char *s1, char *s2){
    int i, j;
    for(i = 0, j = 0; (*(s1 + i)) != '\0'; i++){
        while( (*(s1 + i)) == (*(s2 + j)) ){
            i++;
            j++;
            if( (*(s2 + j)) == '\n' || (*(s2 + j)) == '\0')
                return 1;
            else if( (*(s1 + i)) != (*(s2 + j)))
                return 0;
        }
    }
}

int main(){
    char *s1 = "Ola Mundo", *s2 = "Mundo";
    int retorno = verifica(s1,s2);
    if(retorno == 1)
        printf("A segunda string esta contida\n");
    else 
        printf("A segunda string nao esta contida\n");
    return 0;
}