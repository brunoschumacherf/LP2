#include <stdio.h>
#include <stdlib.h>

int busca_binaria(int*, int, int, int);
int main(void){
  int *vetor, elemento, max, i, bol;
  scanf("%d", &max);
  scanf("%d", &elemento);
  vetor = malloc(max * sizeof(int));
  for(i =0; i < max; i++){
    scanf("%d", &vetor[i]);
  }

  bol = busca_binaria(&vetor[0], elemento, 0, max);

  if(bol){
    printf("Tem\n");
  }


  return 0;
}

int busca_binaria(int *vetor, int elemento, int ini, int fim){
  if(ini > fim){
    return 0;
  }
  if(*vetor == elemento){
    return 1;
  }

  return busca_binaria(vetor++, elemento, ini++, fim);

}