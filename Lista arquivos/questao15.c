#include <stdio.h>
#include <time.h>

int main(){
  FILE *file;
  time_t segundos;
  char caracter;
  int segundo = 0;
  if((file = fopen("accounts.dat", "ab+")) == NULL){
    printf("Erro");
    return -1;
  }

  while (!feof(file)){
    if(segundos != segundo){
      fscanf(file, "%c", &caracter);
      printf("%c\n", caracter);
      segundo = segundos;
    }
  }
  return 0;
}