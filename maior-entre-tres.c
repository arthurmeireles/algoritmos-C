#include <stdio.h>

int main(void) {
  float a, b, c, maior;
  scanf("%f", &a);
  scanf("%f", &b);
  scanf("%f", &c);

  if(a>b && a>c){
    printf("%.2f", a);
  }
  if(a>b && a<c){
    printf("%.2f", c);
  }

  if(a<b && b>c){
    printf("%.2f", b);
  }
  if(a<b && b<c){
    printf("%.2f", c);
  }
  return 0;
}
