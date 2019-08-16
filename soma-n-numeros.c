#include <stdio.h>
int main(void) {
  int soma = 0, a;
  scanf("%d", &a);
  for(int i=0; i<a; i++){
    soma=soma+i;
  } 
  printf("%d", soma);
  return 0;
}
