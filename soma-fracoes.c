#include <stdio.h>
int main(void) {
  float soma, divisao;
  float n=1;
  for(int i=1; i<=4; i++){
    divisao = n/i;
    printf("divisao = %.2f \n ", divisao);    
    soma = soma + divisao;
    printf("soma %.2f \n", soma);    
    n=n+2;
    printf("Numero que vai ser dividido = %f \n", n);    
  }
  printf("Total = %.2f ", soma);    
  return 0;
}
