//
// Created by helio.junior on 06/09/2018.
//

#include "selection.h"

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