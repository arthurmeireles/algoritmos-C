#include <stdio.h>
#include<math.h>

int main(void) {
  int a;
  scanf("%d", &a);

  if(a>=0){
    float b= sqrt(a);	
    printf("%.2f", b);
  }
  else{
    float b= a*a;
    printf("%.2f", b);
  }
  return 0;
}
