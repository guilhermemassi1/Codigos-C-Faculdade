#include<stdio.h>

/*
Crie uma estrutura representando uma hora. Essa estrutura deve conter os campos
hora, minuto e segundo. Agora, escreva um programa que leia um vetor de cinco
posições dessa estrutura e imprima a maior hora.
*/

typedef struct{
    int hora, minuto, segundo;
} Hora;


int main(){
    Hora h[5];
    int i, iM;
    for(i = 0; i < 5; i++){
        printf("Registro %d", (i+1));

        printf("\nHoras: ");
		scanf("%d", &h[i].hora);
		
		printf("Minutos: ");
		scanf("%d", &h[i].minuto);
		
		printf("Segundos: ");
		scanf("%d", &h[i].segundo);
    }

    for (i=1; i<5; i++) {
		if (h[i].hora > h[iM].hora)
			iM = i;
		else if (h[i].hora == h[iM].hora) {
			if (h[i].minuto > h[iM].minuto) 
				iM = i;
			else if (h[i].minuto == h[iM].minuto) {
				if (h[i].segundo > h[iM].segundo)
					iM = i;
			}		
		} 
	}
	
	printf("\n--- Maior h: %dh %dm %ds.\n\n", h[iM].hora, h[iM].minuto, h[iM].segundo); 
    return 0;
}
