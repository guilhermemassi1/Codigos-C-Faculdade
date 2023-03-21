typedef struct esfera Esfera;

float Esfera_volume(Esfera *e);
float Esfera_area(Esfera *e);
int Esfera_atribui(Esfera* e, int raio);
int Esfera_acessa(Esfera* e, int* raio);
void Esfera_libera(Esfera* e);
Esfera* Esfera_cria(int raio);
