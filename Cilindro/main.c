#include <stdio.h>
#include <stdlib.h>
#include "cilindro.h"

int main(){
    Cilindro *c;
    float area, volume;

    c = Cilindro_cria(6,5);
    area = Cilindro_area(c);
    printf("Area total do Cilindro = %.2f\n", area);

    volume = Cilindro_volume(c);
    printf("Volume total do Cilindro = %.2f\n", volume);
    
    Cilindro_libera(c);

    system("pause");
    return 0;
}
