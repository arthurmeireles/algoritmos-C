#include <stdio.h>
int main(void) {
  int a, b, i, resto, resto2;
  scanf("%d", &a);
  scanf("%d", &b);
  if(a>b){
    for(int i =b; i>=1 ; i--) {
      resto = a%i;
      resto2 = b%i;
      if(resto == resto2 && resto==0){
        printf("%d", i);
        break;
      }
    } 
  }
  else{
    for(int i = a; i>=1 ; i--) {
      resto = a%i;
      resto2 = b%i;
      if(resto == resto2 && resto==0){
        printf("%d", i);
        break;
      }
    } 
  }
  return 0;
}
