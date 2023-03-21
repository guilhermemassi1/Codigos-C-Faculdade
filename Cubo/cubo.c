#include "cubo.h"
#include <stdlib.h>
#include <math.h>

struct cubo{
    int aresta;
};

Cubo* cubo_cria(int aresta){
    Cubo* c = (Cubo*) malloc(sizeof(Cubo));
    if(c != NULL){
        c->aresta = aresta;
    }
    return c;
}


void cubo_libera(Cubo* c){
    free(c);
}


int cubo_acessa(Cubo* c, int* aresta){
    if(c == NULL)
        return 0;
    *aresta = c->aresta;
    return 1;
}

int cubo_atribui(Cubo* c, int aresta){
    if(c == NULL)
        return 0;
    c->aresta = aresta;
    return 1;
}

float cubo_area(Cubo *c){
    if(c == NULL)
        return -1;
    float area = c->aresta*c->aresta*6;
    return area;
}

float cubo_volume(Cubo *c){
    if(c == NULL)
        return -1;
    float volume = c->aresta*c->aresta*c->aresta;
    return volume;
}