#include <stdio.h>
int main(void) {
  float soma;
  int n=1;
  for(int i=1; i<=50; i++){
    soma = soma + (n/i);
    n=n+2;
  }
  printf("%.2f ", soma);    
  return 0;
}
