//
// Created by helio.junior on 06/09/2018.
//

#include "quick.h"

int *quickSort(int vetor[], int low, int high) {
    size_t sizeOfVetor = (sizeof(vetor) / sizeof(vetor[0]));
    if (low < high) {
        int pi = partition(vetor, low, high);

        // Separately sort elements before
        // partition and after partition
        quickSort(vetor, low, pi - 1);
        quickSort(vetor, pi + 1, high);
    }
//    if (low == 0 || (high + 1) == sizeOfVetor) printf("Acabou mesmo\n");
    return vetor;
}

int partition (int vetor[], int low, int high) {
    int pivot = vetor[high];    // pivot
    int i = (low - 1);  // Index of smaller element

    for (int j = low; j <= high- 1; j++) {
        // If current element is smaller than or equal to pivot
        if (vetor[j] <= pivot) {
            i++;
            swap(&vetor[i], &vetor[j]);
        }
    }
    swap(&vetor[i + 1], &vetor[high]);
    return (i + 1);
}