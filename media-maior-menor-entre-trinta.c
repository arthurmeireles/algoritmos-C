#include <stdio.h>
int main(void) {
  float media, a, b, maior, menor;
  scanf("%f", &a);
  maior = a;
  menor= a;
  for(int i=0; i<30; i++){
    b= b+a;
    scanf("%f", &a);
    if(a>maior){
      maior=a;
    }
    if(a<menor){
      menor = a;
    }
  }
  media=b/30;
  printf("%f \n", media);
  printf("%.0f \n ", maior);
  printf("%.0f \n", menor);
  return 0;
}
