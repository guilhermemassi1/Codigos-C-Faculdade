#include "cilindro.h"
#include <stdlib.h>
#include <math.h>

struct cilindro{
    int altura;
    int raio;
};

Cilindro* Cilindro_cria(int altura, int raio){
    Cilindro* c = (Cilindro*) malloc(sizeof(Cilindro));
    if(c != NULL){
        c->raio = raio;
        c->altura = altura;
    }
    return c;
}


void Cilindro_libera(Cilindro* c){
    free(c);
}


int Cilindro_acessa(Cilindro* c,int *altura, int *raio){
    if(c == NULL)
        return 0;
    *raio = c->raio;
    *altura = c->altura;
    return 1;
}

int Cilindro_atribui(Cilindro* c, int raio, int altura){
    if(c == NULL)
        return 0;
    c->raio = raio;
    c->altura = altura;
    return 1;
}

float Cilindro_area(Cilindro *c){
    if(c == NULL)
        return -1;
    float area = 2*M_PI*c->raio*c->altura + 2*M_PI*c->raio*c->raio;
    return area;
}

float Cilindro_volume(Cilindro *c){
    if(c == NULL)
        return -1;
    float volume = M_PI*c->raio*c->raio*c->altura;
    return volume;
}