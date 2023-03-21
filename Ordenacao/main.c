#include "ordenacao.h"

int main(){
    int tamanho = 5, vet[5];
   
    scanvet(vet, tamanho);
    printvet(vet, tamanho);
    printf("\nRealizacao ordenacao\n");
    //bubbleSort(vet, tamanho);
    //bubbleSort2(vet,tamanho);
    //mergeSort(vet, 0, tamanho);
    //selectionSort(vet, tamanho);
    //quickSort(vet, 0 , tamanho);
    heapSort(vet,tamanho);
    printvet(vet, tamanho);
    return 0;
}