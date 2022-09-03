#include <stdio.h>
#include <stdlib.h>


int somafat(int);
int main(){
  printf("%d", somafat(3));
  return 0;
}
int somafat(int n){
  if(n == 0){
    return 0;
  }else{
    return n + somafat(n - 1);
  }
}