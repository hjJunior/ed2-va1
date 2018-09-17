//
// Created by helio.junior on 06/09/2018.
//

#include "merge.h"

int *mergeSort (int vetor[], int inicio, int fim, int sizeOfVetor) {
    if (inicio == 0 && fim == (sizeOfVetor - 1)) { // Starting the merge
        mergeStartedAt = clock();
        contaRecursividadeMerge = contaComparacaoMerge = contaTrocaMerge = 0;
    }
    contaRecursividadeMerge++;
    if (inicio < fim) {
        int meio = inicio + (fim - inicio) / 2;

        mergeSort(vetor, inicio, meio, sizeOfVetor);
        mergeSort(vetor, meio + 1, fim, sizeOfVetor);

        merge(vetor, inicio, meio, fim);
    }

    if (inicio == 0 && fim == (sizeOfVetor - 1)) { // Identify the end of merge
        clock_t finishedAt = clock();
        double time_spent = (double)(finishedAt - mergeStartedAt) / CLOCKS_PER_SEC;
        printf("-------------------\n");
        printf("Method: MergeSort\n");
        printf("Compared: %d times\nChanges: %d times\n", contaComparacaoMerge, contaTrocaMerge);
        printf("Merge sort called %d times\n", contaRecursividadeMerge);
        printf("Seconds of execution: %f\n", time_spent);
        printf("-------------------\n");
    }
    return vetor;
}

void merge(int arr[], int l, int m, int r) {
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;

    /* create temp arrays */
    int *L = NULL, *R = NULL;
    L = (int *)malloc(n1 * sizeof(int));
    R = (int *)malloc(n2 * sizeof(int));

    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];

    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray
    while (i < n1 && j < n2)  {
        contaComparacaoMerge++;
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
            contaTrocaMerge++;
        }
        else  {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    /* Copy the remaining elements of L[], if there are any */
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    /* Copy the remaining elements of R[], if there are any */
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}