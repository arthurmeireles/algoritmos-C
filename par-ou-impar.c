#include <stdio.h>

int main(void) {
  int a;
  scanf("%d", &a);

  a = a%02;

  if(a==0){
    printf("Par");
  }
  else{
    printf("Impar");
  }
  return 0;
}
