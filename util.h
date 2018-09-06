//
// Created by helio.junior on 06/09/2018.
//

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

#include "sorter-methods/bubble.c"
#include "sorter-methods/insertion.c"
#include "sorter-methods/selection.c"
#include "sorter-methods/merge.c"

#define TAM1 10
#define TAM2 100
#define TAM3 5000
#define TAM4 10000


void printVetor (int vetor[], int tamanho);
void copiaVetor(int vetor[], int vetorModificado[], int tamanho);
void preencheVetor (int vetor[], int vector2[], int tamanho);
int selectSizeForVector();