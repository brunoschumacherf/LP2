#include <stdio.h>
#include <stdlib.h>

typedef struct
{
  float x,y;
}Tponto;

int main(){
  Tponto ponto;

  do{
    printf("Digite a cordenada de X: ");
    scanf("%f", &ponto.x);
    printf("Digite a cordenada de Y: ");
    scanf("%f", &ponto.y);

    if(ponto.x > 0){
      if(ponto.y > 0){
        printf("Quadrante I\n");
      }else{
        printf("Quadrante IIII\n");
      }
    }else if(ponto.y > 0){
      if(ponto.x > 0){
        printf("Quadrante II\n");
      }else{
        printf("Quadrante III\n");
      }
    }
    if(ponto.x == 0 && ponto.y == 0){
      printf("Ponto sobre os eixos");
    }
  }while(ponto.x == 0 && ponto.y == 0);
}