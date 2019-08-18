Detalhes#include <stdio.h>
int main(void) {
  int mult, entrada;
  scanf("%d", &entrada);
  for(int i=0; i<=entrada; i++){
    mult = entrada * i;
    printf("%d ", mult);    
  }
  return 0;
}
