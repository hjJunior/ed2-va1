#include "util.c"

int main() {
    srand((unsigned) time(NULL));
    int tamanho = selectSizeForVector();
    int *vetorBK = NULL, *vetor = NULL;

    // Alocando a memoria dinamica para o vetor
    vetorBK = (int *)malloc(tamanho * sizeof(int));
    vetor = (int *)malloc(tamanho * sizeof(int));

    // Deve-se preencher o vetor com numeros a serem ordenados
    preencheVetor(vetor, vetorBK, tamanho);
    printf("Random vetor: \n");
    printVetor(vetor, tamanho);


    // BubbleSort
    bubbleSort(vetor, tamanho);
    copiaVetor(vetorBK, vetor, tamanho);


    // InsertionSort
    insertionSort(vetor, tamanho);
    copiaVetor(vetorBK, vetor, tamanho);


    // SelectionSort
    selectionSort(vetor, tamanho);
    copiaVetor(vetorBK, vetor, tamanho);


    return 0;
}


