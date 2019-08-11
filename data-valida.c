#include <stdio.h>
int main(void) {
  int d, m, a; 
  scanf("%d/%d/%d", &d, &m, &a);
  if(a>2020 || m>12 || d> 30){
    printf("A Data é Invalida");
  }
  else{
    printf("A Data é valida");
  }
  return 0;
}
