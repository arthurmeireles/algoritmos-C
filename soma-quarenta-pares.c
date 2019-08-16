#include <stdio.h>
int main(void) {
  int soma = 0, contador = 0;
  for(int i = 0; i>=0; i++){
    if(contador == 40){
      break;
    }
    else{
      int resto = i%2;
      if(resto == 0){
        soma=soma+i;
        contador++;
      }
    }
  }
  printf("%d\n", soma);
  printf("%d\n", contador);
  return 0;
}
