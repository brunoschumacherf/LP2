#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct{
  long int cpf;
  int idade;
  char nome;
}Onibus;

typedef struct{
  Onibus rio[40], saoPaulo[40];
  char data[10];
  char hora[10];
}Viagens;

void date(int *data_atual){
  
}

void hora(int k,Viagens *ptr){
  switch (k)
  {
  case 0:
    *ptr->hora = '10:00';
    break;
  case 1:
    *ptr->hora = '12:00';
    break;
  case 2:
    *ptr->hora = '14:00';
    break;
  case 3:
    *ptr->hora = '16:00';
    break;
  case 4:
    *ptr->hora = '18:00';
    break;
  }
}

char formatDate(long int date_atual){
  char return_date[10], dateAtual[10];
  sprintf(dateAtual, "%ld", date_atual);
  '10 1 0 09 2021';
  return_date[0] = dateAtual[2];
  return_date[1] = dateAtual[3];
  return_date[2] = '|';
  return_date[3] = dateAtual[4];
  return_date[4] = dateAtual[5];
  return_date[5] = '|';
  return_date[6] = dateAtual[6];
  return_date[7] = dateAtual[7];
  return_date[8] = dateAtual[8];
  return_date[9] = dateAtual[9];

  return return_date;
}
int main(){
  Viagens *viagens;
  struct tm *date;
  int i, j, k;
  int ate, date_format;
  long int date, time, hour;   

  printf("Digite a data sem espaço ou / ex '19042020' ");
  scanf("%ld", &date);
  printf("Ate que data sem espaço ou / ex '19042020' ");
  scanf("%ld", &time);
  hour = date - time;


  viagens = (Viagens*) malloc(hour * 5 * sizeof(Viagens));

  date = date + 1000000000;
  time = time + 1000000000;

  if(viagens == NULL){
    printf("Memoria insuficiente\n");
    return -1;
  }
  j = 0;
  ate = 5;
  for(i = 0; i < hour; i++){
    for(k = 0; j < ate; j++, k++){
      hora(k, &viagens[j]);
      date_format = formatDate(date);
      viagens[j].data = date_format;
    }
    ate += 5;
  }

  for(i = 0; i < hour; i++){
    printf("%s", viagens[i].data);
    printf("%s", viagens[i].hora);
  }
  return 0;
}