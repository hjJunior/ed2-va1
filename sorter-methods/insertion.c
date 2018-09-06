//
// Created by helio.junior on 06/09/2018.
//

#include "insertion.h"

int *insertionSort (int vetor[], int tamanho) {
    int contaTroca = 0, contaComparacao = 0;
    int i, key, j;
    clock_t startedAt = clock();
    for (i = 1; i < tamanho; i++) {
        key = vetor[i];
        j = i-1;
        contaComparacao++;
        while (j >= 0 && vetor[j] > key) {
            contaComparacao++;
            contaTroca++;
            vetor[j+1] = vetor[j];
            j = j-1;
        }
        vetor[j+1] = key;
    }
    clock_t finishedAt = clock();
    double time_spent = (double)(finishedAt - startedAt) / CLOCKS_PER_SEC;
    printf("-------------------\n");
    printf("Method: Insertion\n");
    printf("Compared: %d times\nChanges: %d times\n", contaComparacao, contaTroca);
    printf("Seconds of execution: %f\n", time_spent);
    printf("-------------------\n");
    return vetor;
}
