#include "stdio.h"
#include <stdlib.h>

typedef struct{
  int *val;
  int n;
  int max;
  int min;
  float media;
}TSeq;

int main (){
  TSeq *tseq;
  int i;
  printf("Digite quantos Numeros: ");
  scanf("%i", &tseq->n);

  tseq->val = malloc(tseq->n * sizeof(tseq->val));

  if(tseq->val == NULL){
    printf("Memoria Insuficiente");
    return -1;
  }

  printf("Digite o 1 numero: ");
  scanf("%i", &tseq->val[0]);
  tseq->max = tseq->val[0];
  tseq->min = tseq->val[0];

  for(i = 1; i < tseq->n; i++){
    printf("Digite o %i numero: ", i);
    scanf("%i", &tseq->val[i]);

    if(tseq->val[i] > tseq->max){
      tseq->max = tseq->val[i];
    }
    if(tseq->val[i] < tseq->min){
      tseq->min = tseq->val[i];
    }
  }
  printf("o maior %i \n o menor %i\n", tseq->max, tseq->min);
  return 0;
}