//
// Created by helio.junior on 06/09/2018.
//

#include "heap.h"

int *heapSort(int vetor[], int tamanho) {
    int tmp;
    contaComparacaoHeap = contaTrocaHeap = 0;
    clock_t startedAt = clock();
    // Build heap (rearrange array)
    for (int i = tamanho / 2 - 1; i >= 0; i--) heapify(vetor, tamanho, i);

    // One by one extract an element from heap
    for (int i = tamanho - 1; i >= 0; i--) {
        // Move current root to end
        tmp = vetor[0];
        vetor[0] = vetor[i];
        vetor[i] = tmp;
        contaTrocaHeap++;

        // call max heapify on the reduced heap
        heapify(vetor, i, 0);
    }

    clock_t finishedAt = clock();
    double time_spent = (double)(finishedAt - startedAt) / CLOCKS_PER_SEC;
    printf("-------------------\n");
    printf("Method: HeapSort\n");
    printf("Compared: %d times\nChanges: %d times\n", contaComparacaoHeap, contaTrocaHeap);
    printf("Seconds of execution: %f\n", time_spent);
    printf("-------------------\n");
    return vetor;
}

void heapify(int vetor[], int tamanho, int i) {
    int largest = i; // Initialize largest as root
    int l = 2*i + 1; // left = 2*i + 1
    int r = 2*i + 2; // right = 2*i + 2
    int tmp;

    // If left child is larger than root
    contaComparacaoHeap++;
    if (l < tamanho && vetor[l] > vetor[largest]) largest = l;

    // If right child is larger than largest so far
    contaComparacaoHeap++;
    if (r < tamanho && vetor[r] > vetor[largest]) largest = r;

    // If largest is not root
    contaComparacaoHeap++;
    if (largest != i) {
        tmp = vetor[i];
        vetor[i] = vetor[largest];
        vetor[largest] = tmp;

        contaTrocaHeap++;

        // Recursively heapify the affected sub-tree
        heapify(vetor, tamanho, largest);
    }
}