#include <stdio.h>

typedef struct{
  char nome[255];
  char telefone[13];
}TAluno;


int main(){
  TAluno aluno;
  FILE *file;
  int i = 0;
  if((file = fopen("aluno.txt", "w")) == NULL){
    printf("Erro ao abrir arquivo\n");
    return -1;
  }
  while(1){
    scanf("%s", aluno.nome);
    scanf("%s", aluno.telefone);
    fprintf(file,"%s", aluno.nome);
    fprintf(file, "%s", "   ");
    fprintf(file, "%s" , aluno.telefone);
    fprintf(file, "%s", "\n");
    i++;
  }
  fclose(file);
  return 0;
}