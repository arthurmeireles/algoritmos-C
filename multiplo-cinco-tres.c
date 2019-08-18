#include <stdio.h>
int main(void) {
  float a, b;
  for(int i=1; i!=200; i++){
    a = i%3;
    b = i%5;
    if(a==0 || b==0){
      printf("%d ", i);
    }
  }
  return 0;
}
