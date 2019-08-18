#include <stdio.h>
int main(void) {
  float soma = 0;
  int n = 1, entrada;
  scanf("%d", &entrada);
  
  for(int i=1; i<=entrada; i++){
    soma = soma + (n/i);
  }
  printf("%.2f ", soma);    
  return 0;
}
