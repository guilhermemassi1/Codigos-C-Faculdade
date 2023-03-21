#include <stdio.h>
#include <stdlib.h>
#include "Cubo.h"

int main(){
    Cubo *e;
    float area, volume;

    c = cubo_cria(4);
    area = cubo_area(c);
    printf("Area total do cubo = %.2f\n", area);

    volume = cubo_volume(e);
    printf("Volume total do cubo = %.2f\n", volume);
    
    cubo_libera(c);

    system("pause");
    return 0;
}
