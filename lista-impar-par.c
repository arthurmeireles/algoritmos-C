#include <stdio.h>
int main(void) {
  int a;
  int lista[10];
  for(int i=0; i<10; i++){
    scanf("%d", &a);
    lista[i] = a;
  }  
  for(int i=0; i<10; i++){
    a=lista[i];
    int resto = a%2;
    if(resto ==0){
      printf("%d  Par \n", a);
    }
    else{
      printf("%d Impar \n", a);
    }
  }
  return 0;
}
