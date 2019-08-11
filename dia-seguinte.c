#include <stdio.h>
int main(void) {
  int dia, mes, ano; 
  scanf("%d/%d/%d", &dia, &mes, &ano);
  printf("%d/%.2d/%d", ++dia, mes, ano);
  return 0;
}
