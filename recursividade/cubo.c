#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int soma(int);

int main(){
  printf("%d", soma(2));
}

int soma(int n){
  if (n == 0){
    return 0;
  }else{
    return (soma(n-1)+pow(n, 3));
  }
}