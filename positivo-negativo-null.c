#include <stdio.h>

int main(void) {
  int a;
  scanf("%d", &a);
  if(a<0){
    printf("O número é negativo");
  }
  if(a>0){
    printf("O número é positivo");    
  }
  if(a==0){
    printf("O número é nulo");
  }
  return 0;
}
