#include <stdio.h>
int main(void) {

  float a, b, c, d, e, maior, menor;
  scanf("%f", &a);
  scanf("%f", &b);
  scanf("%f", &c);
  scanf("%f", &d);
  scanf("%f", &e);

  menor = a;
  maior = a;

  if(maior<b){
    maior= b;
  }
  if(maior<c){
    maior= c;
  }
  if(maior<d){
    maior= d;
  }
  if(maior<e){
    maior= e;
  }

  if(menor>b){
    menor= b;
  }
  if(menor>c){
    menor= c;
  }  
  if(menor>d){
    menor= d;
  }
  if(menor>e){
    menor= e;
  }
  printf("O maior numero é: %.2f \n", maior); 
  printf("O menor numero é: %.2f", menor);
  return 0;
}
