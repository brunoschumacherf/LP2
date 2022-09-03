#include <stdio.h>

int pow1(int, int);

int main(){
  int n, i, j = i;

  scanf("%d", &n);

  for(i = 1; i < n + 1; i++){
    j = i;
    printf("%d ", j);
    j = pow1(j, i);
    printf("%d ", j);
    j = pow1(j, i);
    printf("%d ", j);
    printf("\n");
  }
gcc prog.c -o prog
  return 0;
}


int pow1(int n, int i){

  return n * i;
}