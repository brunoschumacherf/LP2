#include <stdio.h>
#include <stdlib.h>

void print_star(int);

int main(){

  int i;
  int n;

  printf("Quantas linhas terá o quadrado: ");
  scanf("%d", &n);

  for(i = n; i > 0; i--){
    print_star(i);
  }
  return 0;
}

void print_star(int star){
  int i;
  for (i = 0; i < star; i++){
    printf("*");
  }
  printf("\n");
}