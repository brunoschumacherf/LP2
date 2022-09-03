#include <stdio.h>
#include <stdlib.h>

int PotenciaInt(int, int);
int main(){
  int base, expoente;
  int result;
  float result2;
  printf("Digite a base: ");
  scanf("%d", &base);
  printf("Digite a expoente: ");
  scanf("%d", &expoente);
  result = PotenciaInt(base, expoente);
  if (expoente < 0){
    result2 = 1.0 / result;
    printf("%f\n", result2);
  }else{
    printf("%d\n", result);
  }
  
  return 0;
}

int PotenciaInt(int base, int expoente){
  int i, result;
  if(expoente == 0){
    return 1;
  }
  result = base;
  for(i = 0; i < expoente - 1; i++){
    result *= base;
  }
  return result;
}