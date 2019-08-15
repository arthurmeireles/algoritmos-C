#include <stdio.h>
int main(void) {
  int soma = 0;
  for(int i=0; i<200; i++){
    soma=soma+i;
    printf("%d ", soma);
  } 
  printf("%d", soma);
  return 0;
}
