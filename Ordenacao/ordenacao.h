#ifndef ORDENACAO_H
#define ORDENACAO_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void printvet(int vet[],int tamanho);
void scanvet(int vet[],int tamanho);
void bubbleSort(int *vet,int n);
void bubbleSort2(int *v, int n);
void mergeSort(int *vet, int inicio,int fim);
void insertionSort(int *vet, int n);
void selectionSort(int *vet, int n);
void heapSort(int *vet,int n);
void quickSort(int *vet, int inicio, int fim);

#endif