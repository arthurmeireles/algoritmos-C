#include <stdio.h>
int main(void) {
  float maior, ultimo,entrada, numeros[10];
  int indiceMaior;
  scanf("%f", &entrada);
  maior = entrada;
  numeros[0] = entrada;
  for(int i = 1 ; i<10; i++){
    scanf("%f", &entrada);
    numeros[i] = entrada;
    if (entrada > maior){
      maior = entrada;
      indiceMaior = i;
    }
  }
  ultimo = numeros[9];
  numeros[9]=maior;
  numeros[indiceMaior] = ultimo;
  printf("A maior valor é %.2f \n ", maior);  
  printf("Seu indice era %d \n ", indiceMaior);
  printf("O ultimo valor era %.2f \n ", ultimo);  
  printf("---------------------------------------- \n ");
  for (int i=0; i<10; i++){
    printf("%.2f ", numeros[i]);
  }  
  return 0;
}
