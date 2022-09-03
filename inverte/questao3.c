#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int revert(int);
int calcularDividendo(int);

int main(){
  int num;
  int revert_num;
  printf("Digite um numero: ");
  scanf("%d", &num);

  revert_num = revert(num);

  printf("%d\n", revert_num);
  return 0;
}

int revert(int num){
  int i;
  int j = 0;
  int num_r = 0;
  i = calcularDividendo(num);
  for(; i != 1;){
    if(num % i != 0){
      num_r += ((num / i) * pow(10, j));
      j++;
      num = num % i;
    }
    i = i/10;
  }
  num_r += (num * pow(10, j));
  return num_r;
}

int calcularDividendo(int num){
  int i = 10;
  while(i < num){
    i *= 10;
  }
  return i / 10;
}