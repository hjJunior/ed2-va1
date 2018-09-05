#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

int *bubbleSort (int vetor[], int tamanho);
void insertionSort(int vetor[], int tamaho);
void selectionSort (int vetor[], int tamanho);
void printVetor (int vetor[], int tamanho);
void copiaVetor(int vetor[], int vetorModificado[], int tamanho);

#define TAM 10

int main() {
    srand(time(NULL));
    int randomVetor[TAM], randomVetorBK[TAM];
    printf("Hello, World!\n");

    for (int i = 0; i < TAM; ++i) {
        randomVetor[i] = randomVetorBK[i] = (rand() % (1000 - 1)) + 1;
    }


    printVetor(randomVetor, TAM);
    bubbleSort (randomVetor, TAM);

    copiaVetor(randomVetorBK, randomVetor, TAM);
    printVetor(randomVetor, TAM);


    return 0;
}

void printVetor (int vetor[], int tamanho) {
    for (int i = 0; i < tamanho; ++i) printf("%d\t", vetor[i]);
    printf("\n");
}
void copiaVetor(int vetor[], int vetorModificado[], int tamanho) {
    for (int i = 0; i < tamanho; ++i) vetorModificado[i] = vetor[i];
}

int *bubbleSort (int vetor[], int tamanho) {
    int memoria, troca, i, j, contaTroca = 0, contaComparacao = 0;
    troca=1; /*A variável "troca" será a verificação da troca em cada passada*/
    for(j=tamanho-1; (j>=1) && (troca==1); j--){
        troca=0; /*Se o valor continuar 0 na próxima passada quer dizer que não houve troca e a função é encerrada.*/
        for(i=0; i<j; i++){
            contaComparacao++;
            if(vetor[i]>vetor[i+1]){
                memoria=vetor[i];
                vetor[i]=vetor[i+1];
                vetor[i+1]=memoria;
                troca=1; /*Se houve troca, "troca" recebe 1 para continuar rodando.*/
                contaTroca++;
            }
        }
    }
    // printf("Numero de comparacoes: %d para %d trocas no metodo bubble sort\n", contaComparacao, contaTroca);
    return vetor;
}

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
    printVetor(vetor, TAM);
}

void selectionSort (int vetor[], int tamanho) { //Funçao selection recebendo vetor e tamanho
    int i, j, posicaoValorMinimo, aux;
    int contaTroca = 0, contaComparacao = 0;
    for (i = 0; i < ( tamanho - 1 ); i++){ //Loop para percorrer o vetor
        posicaoValorMinimo = i; //O valor minimo de posiçao do vetor a ser percorrido e 0
        for (j = ( i + 1 ); j < tamanho; j++){ 			//Percorreremos o vetor da posiçao 1 ate o tamanho estimado
            contaComparacao++;
            if( vetor[j] < vetor[posicaoValorMinimo]){ //Se a posiçao que vamos verificar for menos que a posiçao que temos em maos
                posicaoValorMinimo = j; //A variavel 'j' recebe esse valor
            }
        }
        contaComparacao++;
        if ( i != posicaoValorMinimo ){
            contaTroca++;
            aux = vetor[i];
            vetor[i] = vetor[posicaoValorMinimo];
            vetor[posicaoValorMinimo] = aux;
        }
    }
    printf("Numero de comparacoes: %d para %d trocas no metodo selectionSort sort\n", contaComparacao, contaTroca);
    printVetor(vetor, TAM);
};