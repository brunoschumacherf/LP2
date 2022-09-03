#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct
{
  float x, y, z;
}Tponto;


int main(){
  Tponto ponto;
  float soma, A, B, C, D;
    printf("Digite a cordenada de X: ");
    scanf("%f", &ponto.x);
    printf("Digite a cordenada de Y: ");
    scanf("%f", &ponto.y);
    printf("Digite a cordenada de Z: ");
    scanf("%f", &ponto.z);

    printf("Digite a Coenficiente A: ");
    scanf("%f", &A);
    printf("Digite a Coenficiente B: ");
    scanf("%f", &B);
    printf("Digite a Coenficiente C: ");
    scanf("%f", &C);
    printf("Digite a Coenficiente D: ");
    scanf("%f", &D);

    if(A*ponto.x + B*ponto.y + C*ponto.z == D){
      printf("Pertence ao Plano");
    }
  return 0;
}