#include <stdio.h>
int main(void) {
  float a, b, c, troca;
  scanf("%f", &a);
  scanf("%f", &b);
  scanf("%f", &c);
  if(a>b){
    if(b>c){
      printf("A: %.2f \n B: %.2f \n C: %.2f", a, b, c); 
    }
    else{
      troca = b;
      b =c;
      c=troca;
      if(a>b){
        printf("A: %.2f \n B: %.2f \n C: %.2f", a, b, c);
      }
      else{
        troca = a;
        a = b;
        b = troca;
        printf("A: %.2f \n B: %.2f \n C: %.2f", a, b, c);
      }
    }
  }
  if(b>a){
    troca = a;
    a=b;
    b=troca;

    if(b>c){
      printf("A: %.2f \n B: %.2f \n C: %.2f", a, b, c); 
    }
    else{
      troca = b;
      b =c;
      c=troca;
      if(a>b){
        printf("A: %.2f \n B: %.2f \n C: %.2f", a, b, c);
      }
      else{
        troca = a;
        a = b;
        b = troca;
        printf("A: %.2f \n B: %.2f \n C: %.2f", a, b, c);
      }
    }
  }
  return 0;
}
