#include <stdio.h>

int main(void) {
  float a, b, menor;
  scanf("%f", &a);
  scanf("%f", &b);
  if(a<b){
    printf("A = %.2f \n B= %.2f", a, b);
  }
  else{
    menor=a;
    a=b;
    b=menor;
    printf("A = %.2f \n B= %.2f", a, b);
  }
  return 0;
}
