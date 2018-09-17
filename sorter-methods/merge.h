//
// Created by helio.junior on 06/09/2018.
//

int contaComparacaoMerge = 0;
int contaRecursividadeMerge = 0;
int contaTrocaMerge = 0;
clock_t mergeStartedAt;

int *mergeSort (int vetor[], int inicio, int fim,  int sizeOfVetor);
void merge(int arr[], int l, int m, int r);