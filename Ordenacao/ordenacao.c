#include "ordenacao.h"


void bubbleSort(int *vet,int tamanho){
    int i,j,temp;
    for ( i = tamanho - 1; i >= 0; i--)
    {
        for (j = 1; i <= i ; j++)
        {
            if (vet[j-1] > vet[j])
            {
                temp = vet[j-1];
                vet[j-1] = vet[j];
                vet[j] = temp;
            }   
        }
    }
}

void bubbleSort2(int *v, int n){
    int i, continua, aux, fim = n;
    do
    {
        continua = 0;
        for ( i = 0; i < fim - 1; i++)
        {
            if (v[i] > v[i+1])
            {
                aux = v[i];
                v[i] = v[i+1];
                v[i+1] = aux;
                continua = i;
            }
            
        }
        fim--;
    } while (continua != 0);
    
}

void merge( int *vet, int inicio, int meio, int fim){
    int *temp, p1, p2, tamanho, i, j, k;
    int fim1 = 0, fim2 = 0;
    tamanho = fim-inicio+1;
    p1 = inicio;
    p2 = meio + 1;
    temp = (int *) malloc(tamanho * sizeof(int));
    if (temp != NULL)
    {
        for ( i = 0; i < tamanho; i++)
        {
            if (!fim1 && !fim2)
            {
                if (vet[p1] < vet[p2])
                    temp[i] = vet[p1++];
                else
                    temp[i] = vet[p2++];
            
                if (p1 > meio ) fim1 = 1;
                if (p2 > fim ) fim2 = 1;
            }else{
                if(!fim1)
                    temp[i] = vet[p1++];
                else
                    temp[i] = vet[p2++];
            }
        }
        for (j = 0, k = inicio; j < tamanho; j++, k++)
        vet[k] = temp[j];
    }   
    free(temp);
}

void mergeSort(int *vet, int inicio,int fim){
    int meio;
    if (inicio < fim)
    {
        meio = floor((inicio + fim) / 2) ;
        mergeSort(vet, inicio, meio);
        mergeSort(vet, meio+1, fim);
        merge(vet,inicio,meio,fim);
    }
}

void insertionSort(int *vet, int n){
    int i, j, aux;
    for (i = 0; i < n; i++)
    {
        aux = vet[i];
        for (j = i; (j > 0) && (aux < vet[j - 1]); j--)
            vet[j] = vet[j - 1];
        vet[j] = aux;   
    }
}

void selectionSort(int *vet, int n){
    int i, j, menor, troca;
    for ( i = 0; i < n - 1; i++)
    {
        menor = i;
        for ( j = i + 1; j < n; j++)
        {
            if (vet[j] < vet[menor])
                menor = j;
        }   
            if (i != menor)
            {
                troca = vet[i];
                vet[i] = vet[menor];
                vet[menor] = troca; 
            }
    }
}

void criaHeap(int *vet, int i, int f){
    int aux = vet[i];
    int j = i * 2 + 1;
    while (j <= f)
    {
        if (j < f)
        {
            if (vet[j] < vet[j + 1])
            {
                j = j + 1;
            }
        }
        if (aux < vet[j])
        {
            vet[i] = vet[j];
            i = j;
            j = 2 * i + 1; 
        }else{
            j = f + 1;
        }
    }
    vet[i] = aux;
}

void heapSort(int *vet,int n){
    int i, aux;
    for ( i = (n-1)/2; i >= 0; i--)
    {
        criaHeap(vet, i, n-1);
    }
    for ( i = n-1; i >= 1; i--)
    {
        aux = vet[0];
        vet[0] = vet[i];
        vet[i] = aux;
        criaHeap(vet, 0, i-1);
    }
}

int particiona(int *vet, int inicio, int fim){
    int esq, dir, pivo, aux;
    esq = inicio;
    dir = fim;
    pivo = vet[inicio];
    while (esq < dir)
    {
        while (vet[esq] <= pivo)
            esq++;
        while (vet[dir] > pivo)
            dir--;
        if (esq < dir)
        {
            aux = vet[esq];
            vet[esq] = vet[dir];
            vet[dir] = aux;
        }
    }
    vet[inicio] = vet[dir];
    vet[dir] = pivo;
    return dir;
}

void quickSort(int *vet, int inicio, int fim){
    int pivo;
    if (fim > inicio)
    {
        pivo = particiona(vet, inicio, fim);
        quickSort(vet, inicio, pivo - 1);
        quickSort(vet, pivo + 1, fim);
    }
    
}

void scanvet(int vet[],int tamanho){
    int i;
    printf("Digite os elementos do vetor\n");
    for ( i = 0; i < tamanho; i++)
    {
        scanf("%d",&vet[i]);
    }
}

void printvet(int vet[],int tamanho){
    int i;
    printf("Vetor = ");
    for ( i = 0; i < tamanho; i++)
    {
        printf("%d ",vet[i]);
    }   
}

