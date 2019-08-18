#include <stdio.h>
int main(void) {
  float soma, entrada;
  for(int i=0; i<10; i++){
    scanf("%f", &entrada);
    soma = soma + entrada;
  }
  printf("%.2f ", soma);    
  return 0;
}
