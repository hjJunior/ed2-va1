//
// Created by helio.junior on 06/09/2018.
//

#include "util.h"


void printVetor (int vetor[], int tamanho) {
    for (int i = 0; i < tamanho; ++i) printf("%d\t", vetor[i]);
    printf("\n");
}
void copiaVetor(int vetor[], int vetorModificado[], int tamanho) {
    for (int i = 0; i < tamanho; ++i) vetorModificado[i] = vetor[i];
}

void preencheVetor(int vetor[], int tamanho) {
    for (int i = 0; i < tamaho; ++i) randomVetor[i] = randomVetorBK[i] = (rand() % (1000 - 1)) + 1;
}