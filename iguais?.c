#include <stdio.h>

int main(void) {
  float a, b;
  scanf("%f", &a);
  scanf("%f", &b);

  if(a==b){
    printf("Os números são iguais");
  }
  else{
    printf("Os números não são iguais");
  }
  return 0;
}
