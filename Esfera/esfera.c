#include "esfera.h"
#include <stdlib.h>
#include <math.h>

struct esfera{
    int raio;
};

Esfera* Esfera_cria(int raio){
    Esfera* e = (Esfera*) malloc(sizeof(Esfera));
    if(e != NULL){
        e->raio = raio;
    }
    return e;
}


void Esfera_libera(Esfera* e){
    free(e);
}


int Esfera_acessa(Esfera* e, int* raio){
    if(e == NULL)
        return 0;
    *raio = e->raio;
    return 1;
}

int Esfera_atribui(Esfera* e, int raio){
    if(e == NULL)
        return 0;
    e->raio = raio;
    return 1;
}

float Esfera_area(Esfera *e){
    if(e == NULL)
        return -1;
    float area = 4*M_PI*e->raio*e->raio;
    return area;
}

float Esfera_volume(Esfera *e){
    if(e == NULL)
        return -1;
    float volume = 4*M_PI*e->raio*e->raio*e->raio/3;
    return volume;
}