#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct{
  float x, y;
  float raio;
}Tponto;

int main(){

  Tponto *ponto;
  float res;

  ponto = malloc(sizeof(Tponto));

  printf("Digite o Raio: ");
  scanf("%f", &ponto->raio);

  printf("Digite o ponto x: ");
  scanf("%f", &ponto->x);
  printf("Digite o ponto y: ");
  scanf("%f", &ponto->y);
  res = pow((ponto->x - 2), 2) + pow((ponto->y + 1), 2);
  if(res == ponto->raio){
    printf("Esse ponto pertence a circuferência\n");
  }else if ( res > ponto->raio){
    printf("Ponto externo a circuferência\n");
  }else{
    printf("Ponto interno a circuferência\n");
  }
}