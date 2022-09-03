#include <stdio.h>

int fibonacci(int);

int main(){
  int res, num;
  scanf("%d", &num);
  res = fibonacci(num);
  printf("%d\n", res);
  return 0;
}

int fibonacci(int pos){
  if(pos == 1 || pos == 2){
    return 1;
  }
  return fibonacci(pos - 1) + fibonacci(pos  - 2);
}