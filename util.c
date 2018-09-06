//
// Created by helio.junior on 06/09/2018.
//

#include "util.h"


void printVetor (int vetor[], int tamanho) {
    for (int i = 0; i < tamanho; ++i) printf("%d\t", vetor[i]);
    printf("\n");
}

void copiaVetor (int vetor[], int vetorModificado[], int tamanho) {
    for (int i = 0; i < tamanho; ++i) {
        vetorModificado[i] = vetor[i];
    }
}

void preencheVetor (int vetor[], int vector2[], int tamanho) {
    for (int i = 0; i < tamanho; ++i) {
        vetor[i] = vector2[i] = (rand() % (1000 - 1)) + 1;
    }
}

void selectSizeForVector() {
    printf("Please, type the number that matches the amount of vector size that you want for vector size\n");
    printf("[1] for %d indices\n", TAM1);
    printf("[2] for %d indices\n", TAM2);
    printf("[3] for %d indices\n", TAM3);
    printf("[4] for %d indices\n", TAM4);
    printf("Enter a number between 1 and 4: ");
}