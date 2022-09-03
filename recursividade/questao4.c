#include <stdio.h>
#include <stdlib.h>

int func(int);

int main(void){
  int i;
  int result = 0, num;
  printf("Digite um numero: ");
  scanf("%d", &num);
  printf("%d\n", func(num));
  for(i = num; i >= 0; i--){
    result += i;
  }
  printf("%d\n", result);
  return 0;
}


int func(int n){
  if(n == 0){
    return 0;
  }
  return(n + func(n-1));
}