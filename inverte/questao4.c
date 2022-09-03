#include <stdio.h>
#include <stdlib.h>

float hipotenusa(float, float);
int main(){
  float cateto1, cateto2;
  float hipote;
  printf("Digite o cateto 1: ");
  scanf("%f", &cateto1);
  printf("Digite o cateto 2: ");
  scanf("%f", &cateto2);

  hipote = hipotenusa(cateto1,cateto2);

  printf("%f\n", hipote);
  return 0;
}

float hipotenusa(float cateto1, float cateto2){
  float hipote;
  hipote = cateto1 *  cateto1 + cateto2 *  cateto2;
  return hipote;
}