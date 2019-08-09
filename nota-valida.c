#include <stdio.h>

int main(void) {
  float a;
  scanf("%f", &a);

  if(a>=0.00 && a<=10.00){
    printf("%.2f Nota Valida", a);
  }
  else{
    printf("%.2f Nota Invalida", a);
  }
  return 0;
}
