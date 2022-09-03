#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct temp 
{
    int mes; 
    int dia;
    float min;
    float max;
};

typedef struct temp Temp; 


int obter_temp(char[], Temp[]);
void registro(Temp [], char [], int);

int main()
{
    int i;                
    int qtde;               
    Temp temperaturas[30];  

    qtde = obter_temp("temperaturas.dat", temperaturas);
    registro(temperaturas, "registro.txt", qtde);
}



int obter_temp(char nome_arq[], Temp temperatura[])
{

    char linha[50];
    int i=0;
    FILE *fp = fopen(nome_arq, "r"); 

    if (fp == NULL)
    {
        perror("N�o foi poss�vel encontrar o arquivo com os dados");
        exit(1);                                                     
    }
    while(fgets(linha, sizeof(linha), fp)) 
    {
        temperatura[i].mes = atoi(strtok(linha, ",")); 
        temperatura[i].dia = atoi(strtok(NULL,  ","));
        temperatura[i].min = atof(strtok(NULL,  ","));
        temperatura[i].max = atof(strtok(NULL,  ","));
        i++;
    }
    fclose(fp);
    return i; 
}

void registro(Temp temperatura[], char nomeArquivo[], int qtde){
  int mes, i;
  float soma = 0, media_dia;;
  mes = temperatura[0].mes;
  FILE *file;
  if((file = fopen(nomeArquivo, "w+")) == NULL){
    perror("N�o foi poss�vel encontrar o arquivo com os dados");
    exit(1);
  }
  fprintf(file, "%s", "------Mês ");
  fprintf(file, "%d", mes);
  fprintf(file, "%s", "------\n");
  for(i = 0; i < qtde; i++){
    if(temperatura[i].mes != mes){
      fprintf(file, "%s", "Media do mes: ");
      fprintf(file, "%f", (soma / temperatura[i - 1].dia));
      fprintf(file, "%s", "\n");
      fprintf(file, "%s", "------Mês ");
      fprintf(file, "%d", mes);
      fprintf(file, "%s", "------\n");
      mes = temperatura[i].mes;
      soma = 0;
    }
    fprintf(file, "%d   ", temperatura[i].dia);
    fprintf(file, "%f", ((temperatura[i].max + temperatura[i].min) / 2));
    fprintf(file, "%s", "\n");
    soma += ((temperatura[i].max + temperatura[i].min) / 2);
  }
  fprintf(file, "%s", "Media do mes: ");
  fprintf(file, "%f", (soma / temperatura[i - 1].dia));
  fprintf(file, "%s", "\n");
  fclose(file);
}