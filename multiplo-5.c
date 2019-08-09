#include <stdio.h>

int main(void) {
  int a;
  scanf("%d", &a);
  a = a%5;

  if(a==0){
    printf("O número é múltiplo de 5");
  }
  else{
    printf("O número não é múltiplo de 5");
  }
  return 0;
}
