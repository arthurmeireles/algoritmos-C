#include <stdio.h>
int main(void) {
  float maior, menor,entrada, numeros[10];
  int indiceMaior = 0, indiceMenor = 0;
  scanf("%f", &entrada);
  maior = entrada;
  menor = entrada;
  numeros[0] = entrada;
  for(int i = 1 ; i<10; i++){
    scanf("%f", &entrada);
    numeros[i] = entrada;
    if (entrada > maior){
      maior = entrada;
      indiceMaior = i;
    }
    if (entrada < menor){
      menor = entrada;
      indiceMenor = i;
    }
  }
  printf("A maior nota é %.2f \n ", maior);  
  printf("Seu indice é %d \n ", indiceMaior);
  printf("A maior nota é %.2f \n ", menor);  
  printf("Seu indice é %d \n ", indiceMenor);
  return 0;
}
