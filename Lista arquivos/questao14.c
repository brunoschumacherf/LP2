#include <stdio.h>
#include <stdlib.h>

typedef struct Account{
  char titular[30];
  float saldo;
}Account;

void menu();
void insert_account();
void update_balance();
void list_debtors();
void list_creditors();

int main(){
  int opcao;
  while(1){
    menu();
    scanf("%d", &opcao);
    system("clear");
    switch (opcao)
    {
    case 1:
      insert_account();
      break;
    case 2:
      update_balance();
      break;
    case 3:
      list_debtors();
      break;
    case 4:
      list_creditors();
      break;
    case 5:
      return 0;
      break;
    default:
      printf("----Opção invalida----\n");
    }
  }

  return 0;
}

void menu(){
  printf("---Digite uma opção---\n");
  printf("1 Inserir conta\n");
  printf("2 Atualizar saldo\n");
  printf("3 Listar clientes devedores\n");
  printf("4 Listar clientes credores\n");
  printf("5 Encerrar programa\n");
}

void insert_account(){
  FILE *file;
  Account *account;
  account = malloc(sizeof(Account));
  if((file = fopen("accounts.dat", "ab+")) == NULL){
    printf("Erro");
    exit(1);
  }
  printf("Digite o titular: ");
  scanf("%s", account->titular);
  printf("Digite o saldo: ");
  scanf("%f", &account->saldo);
  fwrite(account, sizeof(Account), 1, file);
  fclose(file);
}

void update_balance(){
  FILE *file;
  int option;
  int digit;
  Account *account;
  account = malloc(sizeof(Account));
  if((file = fopen("accounts.dat", "r+")) == NULL){
    printf("Erro");
    exit(1);
  }
  printf("Qual conta voce quer atualizar o saldo: ");
  scanf("%d", &digit);
  fseek(file, (digit-1) * sizeof(Account), SEEK_SET);
  fread(account, sizeof(Account), 1, file);
  printf("Voce quer atualizar o saldo de %s?\n", account->titular);
  printf("1 - Sim\n");
  printf("2 - Não\n");
  scanf("%d", &option);
  if(option == 1){
    printf("Digite o novo saldo: ");
    scanf("%f", &account->saldo);
    fseek(file, (digit-1) * sizeof(Account), SEEK_SET);
    fwrite(account, sizeof(Account), 1, file);
    system("clear");
    printf("-----Saldo Atualizado----\n");
    fclose(file);
  }else{
    printf("Opção invalida ou não foi aceito");
  }
  free(account);
}

void list_creditors(){
  FILE *file;
  int i = 1;
  Account *account;
  account = malloc(sizeof(Account));
  if((file = fopen("accounts.dat", "rb")) == NULL){
    printf("Erro");
    exit(1);
  }
  while (!feof(file)){
    fread(account, sizeof(Account), 1, file);
    if(account->saldo > 0){
      printf("Conta %d   Titular: %s    saldo %f\n", i, account->titular, account->saldo);
    }
    i++;
  }
  free(account);
  fclose(file);
}

void list_debtors(){
  FILE *file;
  int i = 1;
  Account *account;
  account = malloc(sizeof(Account));
  if((file = fopen("accounts.dat", "rb")) == NULL){
    printf("Erro");
    exit(1);
  }
  while (!feof(file)){
    fread(account, sizeof(Account), 1, file);
    if(account->saldo <= 0){
      printf("Conta %d   Titular: %s    saldo %f\n", i, account->titular, account->saldo);
    }
    i++;
  }
  free(account);
  fclose(file);
}