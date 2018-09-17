//
// Created by helio.junior on 06/09/2018.
//

#include "quick.h"

int *quickSort(int vetor[], int low, int high, int sizeOfVetor) {
    if (low == 0 && high == (sizeOfVetor - 1)) {
        quickStartedAt = clock();
    }
    if (low < high) {
        int pi = partition(vetor, low, high);

        quickSort(vetor, low, pi - 1, sizeOfVetor);
        quickSort(vetor, pi + 1, high, sizeOfVetor);
    }
    if (low == 0 && (high + 1) == sizeOfVetor) {
        quickFinishedAt = clock();
        double time_spent = (double)(quickFinishedAt - quickStartedAt) / CLOCKS_PER_SEC;
        printf("-------------------\n");
        printf("Method: QuickSort\n");
        printf("Compared: %d times\nChanges: %d times\n", contaComparacaoQuick, contaTrocaQuick);
        printf("Seconds of execution: %f\n", time_spent);
        printf("-------------------\n");
    }
    return vetor;
}

int partition (int vetor[], int low, int high) {
    int pivot = vetor[high];    // pivot
    int i = (low - 1);  // Index of smaller element

    for (int j = low; j <= high- 1; j++) {
        // If current element is smaller than or equal to pivot
        contaComparacaoQuick++;
        if (vetor[j] <= pivot) {
            i++;
            swap(&vetor[i], &vetor[j]);
            contaTrocaQuick++;
        }
    }
    swap(&vetor[i + 1], &vetor[high]);
    return (i + 1);
}