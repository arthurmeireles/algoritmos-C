#include <stdio.h>
int main(void) {
  float maior, segundoMaior,ultimo, penultimo, entrada, numeros[20];
  int indiceMaior=0, indiceSegundoMaior=0;
  scanf("%f", &entrada);
  maior = entrada;
  segundoMaior = entrada;
  numeros[0] = entrada;
  for(int i = 1 ; i<20; i++){
    scanf("%f", &entrada);
    numeros[i] = entrada;
    if (entrada > maior && entrada>segundoMaior){
      segundoMaior = maior;
      maior = entrada;
      indiceSegundoMaior = indiceMaior;
      indiceMaior = i;
    }
    if (entrada < maior && entrada>segundoMaior){
      segundoMaior = entrada;
      indiceSegundoMaior = indiceMaior;
      indiceMaior = i;
    }
  }
  ultimo = numeros[19];
  penultimo =numeros[18];
  numeros[19] = maior;
  numeros[indiceMaior]= ultimo;
  numeros[18] = segundoMaior;
  numeros[indiceSegundoMaior]= penultimo;
  printf("A maior valor é %.2f \n ", maior);
  printf("Seu indice era %d \n ", indiceMaior);
  printf("O segundo maior é o valor %.2f \n ", segundoMaior);
  printf("Seu indice era %d \n ", indiceSegundoMaior);   
  printf("---------------------------------------- \n ");
  for (int i=0; i<20; i++){
    printf("%.2f ", numeros[i]);
  }  
  return 0;
}
