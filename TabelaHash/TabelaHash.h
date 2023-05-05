#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*ESTRUTURAS*/
struct aluno{
    int matricula;
    char nome[30];
    float n1,n2,n3;
};

struct hash{
    int qtd, TABLE_SIZE;
    struct aluno **itens;
};
typedef struct hash Hash;

/*FUNCOES E PROCEDIMENTOS*/
Hash* criaHash(int TABLE_SIZE);
Hash* criaHash(int TABLE_SIZE);
void liberaHash(Hash* ha);
int chaveDivisao(int chave, int TABLE_SIZE);
int chaveMultiplicacao(int chave, int TABLE_SIZE);
int chaveDobra(int chave, int TABLE_SIZE);
int valorString(char *str);
int insereHashSemColisao(Hash* ha, struct aluno al);
int buscaHashSemColisao(Hash* ha,int mat, struct aluno* al);
int sondagemLinear(int pos, int i, int TABLE_SIZE);
int sondagemQuadratica(int pos, int i, int TABLE_SIZE);
int duploHash(int H1, int chave, int i, int TABLE_SIZE);
int insereHash_EnderAberto(Hash* ha, struct aluno al);
int buscaHash_EnderAberto(Hash* ha, int mat, struct aluno* al);
