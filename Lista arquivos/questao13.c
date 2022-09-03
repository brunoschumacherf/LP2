#include <stdio.h>

typedef struct{
  char nome[20];
  char matricula[8];
  float cr;
}Dados;

void menu();
void aproved();
void reproved();
void final();

int main(){
  int option;
  while (1){
    menu();
    scanf("%d", option);
    switch(option){
    case 1:
      break;
    case 2:
      break;
    case 3:
      break;
    case 4:
      return 0;
      break;
    default:
      printf("Opção Invalida");
      break;
    }
  }
  
  return 0;
}

void menu(){
  printf("----Digite uma opção----\n");
  printf("1 Alunos com CR > 7-\n");
  printf("2 Alunos com 5 < CR < 7\n");
  printf("3 Alunos com CR < 5\n");
  printf("4 Encerrar o programa\n");
}

void aproved(){
  FILE *file;
  
}