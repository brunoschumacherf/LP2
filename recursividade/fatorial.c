#include <stdio.h>

int fatorial(int);

int main(){
  int num;
  int fatorialR;
  scanf("%d", &num);
  fatorialR = fatorial(num);
  printf("%d\n", fatorialR);
  return 0;
}

int fatorial(int num){
  if(num == 0){
    return 1;
  }
  return num * fatorial(num - 1);
}