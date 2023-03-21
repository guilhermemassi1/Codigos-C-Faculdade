typedef struct cilindro Cilindro;


Cilindro* Cilindro_cria(int altura, int raio);
void Cilindro_libera(Cilindro* c);
int Cilindro_acessa(Cilindro* c,int *altura, int *raio);
int Cilindro_atribui(Cilindro* c, int raio, int altura);
float Cilindro_area(Cilindro *c);
float Cilindro_volume(Cilindro *c);