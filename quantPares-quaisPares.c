#include <stdio.h>
int main(void) {
  int entrada, quantPares=0;
  float resto;
  int numeros[20];
  for(int i =0 ; i<20; i++){
    scanf("%d", &entrada);
    numeros[i] = entrada;
    resto = entrada%2;
    if (resto == 0){
      quantPares++;
    }
  }
  int pares[quantPares];
  int contador = 0; 
  for(int i=0; i<20; i++){
    resto = numeros[i]%2;
    if (resto == 0){
      pares[contador] = numeros[i];
      contador++;
    }
  }
  printf("A quantidade de pares é %d \n ", quantPares);
  for(int i=0; i<quantPares; i++){
    printf("%d ", pares[i]);
  }
  return 0;
}
