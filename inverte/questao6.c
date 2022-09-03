#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int Multiplo(int, int);
int TesteMultiplo(int, int);
int main(){
  int i, n, num1, num2;
  scanf("%d",&n);
  for(i = 0; i < n; i++){
    scanf("%d %d", &num1, &num2);
    if(Multiplo(num1, num2)){
      printf("Multiplo num1");
    }else{
      printf("Multiplo num2");
    }
  }

  return 0;
}

int Multiplo(int num1, int num2){
  if(TesteMultiplo(num1,num2)){
    return 1;
  }else if(TesteMultiplo(num2,num1)){
    return 0;
  }
  return -1;
}

int TesteMultiplo(int num1, int num2){
  int i = 0;
  while(1){
    if(i * num2 == num1){
      return 1;
    }else if(i * num2 > num1){
      return 0;
    }
    i++;
  }
}