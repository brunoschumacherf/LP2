#include <stdio.h>

int sequencia(int, int, int);

int main(){
  int a, r, n;

  scanf("%d %d %d", &a, &r, &n);

  printf("%d\n", sequencia(a, r, n));
  return 0;
}

int sequencia(int a, int r, int n){
  if(n == 1){
    return 1;
  }
  return a * (r * sequencia(1, r, n - 1));
}