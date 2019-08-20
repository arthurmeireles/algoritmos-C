#include <stdio.h>
int main(void) {
  int soma, entrada=1;
  while(entrada !=0){
    scanf("%d", &entrada);
    soma = soma + entrada;
  }
  printf("Total: %d", soma);
  return 0;
}
