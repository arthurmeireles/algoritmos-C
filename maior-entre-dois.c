#include <stdio.h>

int main(void) {
  float a, b;
  scanf("%f", &a);
  scanf("%f", &b);

  if(a>b){
    printf("%.2f", a);
  }
  else{
    printf("%.2f", b);
  }
  return 0;
}
