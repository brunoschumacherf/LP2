#include <stdio.h>

int main(){
  FILE *file;
  file = fopen("arquivo.txt", "a+");
  if(file == NULL){
    printf("ERROR");
    return -1;
  }
  fprintf(file, "%s", "Oiiiiiiiiiii\n");
  fclose(file);
  return 0;
}