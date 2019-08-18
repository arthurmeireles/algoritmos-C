#include <stdio.h>
int main(void) {
  float soma, entrada;
  int a;
  scanf("%d", &a);
  for(int i=a ; i!=0; i--){
    scanf("%f", &entrada);
    soma = soma + entrada;
  }
  printf("%.2f ", soma);    
  return 0;
}
