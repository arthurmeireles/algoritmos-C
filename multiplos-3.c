#include <stdio.h>
int main(void) {
  float a;
  for(int i=1; i!=200; i++){
    a = i%3;
    if(a==0){
      printf("%d ", i);
    }
  }
  return 0;
}
