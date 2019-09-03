#include <stdio.h>
int main(void) {
  float maior = 0, entrada, numeros[10];
  int indiceMaior=0;
  for(int i =0 ; i<10; i++){
    scanf("%f", &entrada);
    if (entrada > maior){
      maior = entrada;
      indiceMaior = i;
    }
  }
  printf("A maior nota é %.2f \n ", maior);  
  printf("Seu indice é %d \n ", indiceMaior);
  return 0;
}
