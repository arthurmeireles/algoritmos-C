#include <stdio.h>
int main(void) {
  int n;
  scanf("%d", &n);
  for(int i = n; i>=1 ; i--) {
      float resto = n%i;
      if(resto == 0){
        printf("%d\n", i);
      }
  }  
  return 0;
}
