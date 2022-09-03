#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define YEAR 365
#define TO_RJ 0
#define TO_SP 1
#define CPF_SIZE 12
#define NAME_SIZE 30
#define BUS_CHAIRS 40
#define TRUE 1
#define FALSE 0

unsigned short int back = 0;
long int date_start;
char hour[7][5] = {"10:00H", "12:00H", "14:00H", "16:00H", "18:00H"};

/*typedef struct {
  unsigned short int day;
  unsigned short int month;
  unsigned short int year;
}Date;*/

typedef struct {
  char name[NAME_SIZE];
  char cpf[CPF_SIZE];
  unsigned short int age;
}Passager;

typedef struct {
  Passager rio[40], saoPaulo[40];
  char data[10];
  char hora[10];
}Travels;

Travels data[YEAR * 5];

// void initializeDate(Travels *data, int half){
//   unsigned short int day = 1;
//   unsigned short int month = 1;
//  /* 
//   char day[3];
//   char month[3];
//   char year[4];
//   char date_aux[10];

//   data[0].date = "01/01/2022";
//   int count;
//   for(count = 1; count < half; count++){
     
//     data[count].data = strcpy(data[count].data, date_aux);
//   }*/
// }
 
void store(){
  int i, j = 0, k;
  int max = 5;
  for(i = 0; i < YEAR * 5; i++){
    for(k = 0; j > max; j++){
      *data[j].data = 'a';
    }
    max += 5;
    date_start = skip_day(date_start);
  }
}

int skip_date(long int date_atual){
  int data;

  return data;
}
char initializeDate(long int date_atual){
  char return_date[10], dateAtual[10];
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

void sellTickets(){
  puts("something");
}

void menu(){
  if(back == 0){
    printf("\t--- Bem vindo ao sistema da viacao BUSMANIA ---\n");
    puts("Inicialize o sistema (entre com a data atual no formato ddmmaaaaa)");
    scanf("%ld", &date_start);
  }
  puts("Selecione uma das opcoes abaixo:");
  puts("1 - Compra de passagens.");
  puts("2 - Modelos de onibus.");
  puts("3 - Trajetos.");
  puts("4 - Horarios.");
  puts("5 - Relatorio das viagens.");
  puts("6 - Sair.");
}

char getChoice(){
  char option;
  int validated = FALSE;
  
  while(validated == FALSE){  
    scanf(" %c", &option);
    fflush(stdin);
    switch (option){
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
          back = 1;
          validated = TRUE;
          return option;
        default:
          back = 1;
          puts("Opcao invalida.");
          menu();
      }
  }
}

void schedules(){
  printf("\n");
  puts("Horarios:");
  puts("RJ / SP & SP / RJ");
  puts("10:00 AM, numero do onibus: 1011.");
  puts("12:00 AM, numero do onibus: 1015.");
  puts("14:00 PM, numero do onibus: 1022.");
  puts("16:00 PM, numero do onibus: 1027.");
  puts("18:00 PM, numero do onibus: 1125.");
  printf("\n");
}

void report(){
  puts("something");
}

void busList(){
  printf("\n");
  puts("Modelos de onibus (todos os veiculos possuem 40 assentos):");
  puts("Marcopolo Mb 1721, 2000 (Nr: 1011).");
  puts("Bussscar Vissta Buss, 2001 (Nr: 1015).");
  puts("Bussscar Vissta Hi 360, 2005 (Nr: 1022).");
  puts("Marcopolo Paradiso g6 1200, 2010 (Nr: 1027).");
  puts("Marcopolo Paradiso g7 1050, 2012 (Nr: 1125).");
  printf("\n");
}

void paths(){
  printf("\n");
  puts("Trajetos:"); 
  puts("Rio de Janeiro - RJ / Sao Paulo - SP");
  puts("Sao Paulo - SP / Rio de Janiero - SP");
  printf("\n");
}

int main (){
  char option;
  
 
  initializeDate(data);
  
  while (option != '6'){
    menu();
    if (back == 0){
      store();
    }
    option = getChoice();
    switch (option){
      case '1':
        sellTickets();
        break;
      case '2':
        busList();
        break;
      case '3':
        paths();
        break;
      case '4':
        schedules();
        break;
      case '5':
        report();
        break;  
      case '6':
        exit(0);
        break;
    }
  }
  
  return 0;
}
