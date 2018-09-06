//
// Created by helio.junior on 06/09/2018.
//

#include "selection.h"

int *selectionSort (int vetor[], int tamanho) { //Funçao selection recebendo vetor e tamanho
    int i, j, posicaoValorMinimo, aux;
    int contaTroca = 0, contaComparacao = 0;
    clock_t startedAt = clock();
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
    clock_t finishedAt = clock();
    double time_spent = (double)(finishedAt - startedAt) / CLOCKS_PER_SEC;
    printf("-------------------\n");
    printf("Method: SelectionSort\n");
    printf("Compared: %d times\nChanges: %d times\n", contaComparacao, contaTroca);
    printf("Seconds of execution: %f\n", time_spent);
    printf("-------------------\n");
    return vetor;
};