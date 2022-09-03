#include <stdio.h>
#include <stdlib.h>


typedef struct{
  char name[20];
  long int registration;
  char gender;
  short int age;
  char email[30];
}Alunos;


void ler_dados(Alunos*, int);
void print_dados(Alunos*, int);
FILE* new_file();
void write_file(FILE*, Alunos*, int);


int main(){
  Alunos *alunos;
  FILE *file;
  int n;
  printf("Digite quantos alunos: ");
  scanf("%d", &n);
  alunos = malloc(n * sizeof(Alunos));
  ler_dados(alunos, n);
  // print_dados(alunos, n);
  file = new_file();
  write_file(file, alunos, n);
  fclose(file);
  return 0;
}

void ler_dados(Alunos *alunos, int n){
  int i;

  for(i = 0; i < n ; i++){
    printf("Digite o nome do aluno: ");
    scanf("%s", alunos[i].name);
    printf("Digite a matricula do aluno: ");
    scanf("%li", &alunos[i].registration);
    fflush(stdin);
    printf("Digite o genero do aluno: ");
    scanf("%c", &alunos[i].gender);
    printf("Digite a idade do aluno: ");
    scanf("%hd", &alunos[i].age);
    printf("Digite o email do aluno: ");
    scanf("%s", alunos[i].email);
  }
}

void print_dados(Alunos *alunos, int n){
  int i;
  for(i = 0; i < n; i++){
    printf("%s  ", alunos[i].name);
    printf("%ld  ", alunos[i].registration);
    printf("%c  ", alunos[i].gender);
    printf("%hd  ", alunos[i].age);
    printf("%s\n", alunos[i].email);
  }
}


FILE* new_file(){
  FILE *fp;
  if ((fp = fopen("alunos.txt", "w"))==NULL){
    printf("Erro ao abrir o arquivo!!!\n");
    exit(1);
  }
  return fp;
}


void write_file(FILE *file, Alunos *alunos, int n){
  int i;
  for(i = 0; i < n; i++){
    fprintf(file, "%s", alunos[i].name);
    fprintf(file, "   %ld", alunos[i].registration);
    fprintf(file, "   %c", alunos[i].gender);
    fprintf(file, "   %hd", alunos[i].age);
    fprintf(file, "    %s", alunos[i].email);
    fprintf(file, "    %s", "\n");
  }
}