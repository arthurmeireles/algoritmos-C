#include <stdio.h>
#include <math.h>
int main(void) {
  int a, n, total;
  scanf("%d", &a);
  n=a;
  a--;
  total= a * n;
  while(a!=1){
    a--;
    total=total*a;
  }
  printf("%d", total);
  return 0;
}
