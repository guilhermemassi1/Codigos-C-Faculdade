#include <stdio.h>
#include <stdlib.h>
#include "esfera.h"

int main(){
    Esfera *e;
    float area, volume;

    e = Esfera_cria(4);
    area = Esfera_area(e);
    printf("Area total do Esfera = %.2f\n", area);

    volume = Esfera_volume(e);
    printf("Volume total do Esfera = %.2f\n", volume);
    
    Esfera_libera(e);

    system("pause");
    return 0;
}
