//
// Created by helio.junior on 06/09/2018.
//

#include "bubble.h"

int *bubbleSort (int vetor[], int tamanho) {
    clock_t startedAt = clock();
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
    clock_t finishedAt = clock();
    double time_spent = (double)(finishedAt - startedAt) / CLOCKS_PER_SEC;
    printf("-------------------\n");
    printf("Method: BubbleSort\n");
    printf("Compared: %d times\nChanges: %d times\n", contaComparacao, contaTroca);
    printf("Seconds of execution: %f\n", time_spent);
    printf("-------------------\n");
    return vetor;
}
