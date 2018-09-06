//
// Created by helio.junior on 06/09/2018.
//

#include "bubble.h"

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
