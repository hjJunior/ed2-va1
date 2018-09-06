//
// Created by helio.junior on 06/09/2018.
//

#include "insertion.h"

void insertionSort (int vetor[], int tamanho) {
    int contaTroca = 0, contaComparacao = 0;
    int i, key, j;
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
    printf("Numero de comparacoes: %d para %d trocas no insertion bubble sort\n", contaComparacao, contaTroca);
    printVetor(vetor, tamanho);
}
