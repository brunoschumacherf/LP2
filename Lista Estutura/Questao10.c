#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
typedef struct{
  float Re;
  float Im;
}TNumComp;
 
int main(){
  TNumComp Comp1, Comp2;
  float soma1, soma2, sub1, sub2;
 
  printf("Informe a parte real e imaginaria do primeiro numero: \n");
  scanf("%f %f", &Comp1.Re, &Comp1.Im);
  printf("Informe a parte real e imaginaria do segundo numero: \n");
  scanf("%f %f", &Comp2.Re, &Comp2.Im);
  soma1 = Comp1.Re + Comp2.Re;
  soma2 = Comp1.Im + Comp2.Im;
  sub1 = Comp1.Re - Comp2.Re;
  sub2 = Comp1.Im - Comp2.Im;
  if(soma2>=0){
    printf("Soma dos complexos: %.2f + %.2f i \n", soma1, soma2);
  }else{
    printf("Soma dos complexos: %.2f %.2f i \n", soma1, soma2);
  }
  if(sub2>=0){
    printf("Sub dos complexos: %.2f + %.2f i \n", sub1, sub2);
  }else{
    printf("Sub dos complexos: %.2f %.2f i \n", sub1, sub2);
  }
  return 0;
}
