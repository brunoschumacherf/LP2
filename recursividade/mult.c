#include <stdio.h>
#include <stdlib.h>


long int mult(int, int);
int main(){
  long int x, y;
  scanf("%ld %ld", &x, &y);
  printf("%ld\n", mult(x,y));
  return 0;
}


long int mult(int x, int y){
  long int soma = 0;
  int i;
  for(i = 0; i < abs(y); i++){
    soma += x;
  }
  if(x > 0 && y < 0){
    soma = soma * (-1);
  }

  return soma;
}