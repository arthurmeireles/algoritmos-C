#include <stdio.h>
int main(void) {
  int impar=0, par=0, loops, entrada;
  scanf("%d", &loops);
  for(int i=loops; i!=0; i--){
    scanf("%d", &entrada);
    loops = entrada%2;
    if(loops==0){
      par++;
    }
    if(loops==1){
      impar++;
    }
  }
  printf("Impar: %d \n", impar);
  printf("Par: %d \n", par);
  return 0;
}
