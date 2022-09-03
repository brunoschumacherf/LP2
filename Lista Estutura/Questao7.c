#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct
{
  float x, y, z;
}Tponto;

int main(){
  Tponto ponto;
  float maior, soma_cateto;
    printf("Digite de P1: ");
    scanf("%f", &ponto.x);
    printf("Digite P2 ");
    scanf("%f", &ponto.y);
    printf("Digite a cordenada de Z: ");
    scanf("%f", &ponto.z);
    maior = ponto.y;

    if(maior < ponto.z){
      maior = ponto.z;
      soma_cateto = pow(ponto.y, 2) + pow(ponto.x, 2);
    }else if(maior < ponto.x){
      maior = ponto.x;
      soma_cateto = pow(ponto.y, 2) + pow(ponto.z, 2);
    }else{
      soma_cateto = pow(ponto.x, 2) + pow(ponto.z, 2);
    }
    if(soma_cateto == pow(maior, 2)){
      printf("Triangulo Retangulo");
    }
    return 0;
}