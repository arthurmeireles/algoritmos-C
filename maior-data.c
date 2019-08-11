#include <stdio.h>
int main(void) {
  int dia, mes, ano, dia2, mes2, ano2; 
  scanf("%d/%d/%d", &dia, &mes, &ano);
  scanf("%d/%d/%d", &dia2, &mes2, &ano2);
  if(ano2>ano){
    printf("%d/%.2d/%d", dia2, mes2, ano2);
  }
  if(ano2<ano){
    printf("%d/%.2d/%d", dia, mes, ano);
  }
  if(ano==ano2){
    if(mes>mes2){
      printf("%d/%.2d/%d", dia, mes, ano);
    }
    if(mes<mes2){
      printf("%d/%.2d/%d", dia2, mes2, ano2);
    }
    if(mes==mes2){
      if(dia>dia2){
        printf("%d/%.2d/%d", dia, mes, ano);
      }
      if(dia<dia2){
        printf("%d/%.2d/%d", dia2, mes2, ano2);
      }
      if(dia==dia2){
        printf("As datas são iguais: %d/%.2d/%d", dia2, mes2, ano2);
      }
    }
  }
  return 0;
}
