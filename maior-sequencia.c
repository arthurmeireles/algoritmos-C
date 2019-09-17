#include <stdio.h>
int main(void) {
  int a[10], entrada, indice = 0, quant = 1, valorAnterior, quantMaior, indiceMaior = 0;
  for(int i = 0; i<10; i++){
    scanf("%d", &entrada);
    a[i] = entrada;  
  }
  valorAnterior = a[0];
  for(int i = 1; i<10 ; i++){
    if(valorAnterior < a[i]){
      quant++;
      indice = i; 
    }
    else{
      if(quant > quantMaior){
        quantMaior = quant;
        indiceMaior = indice;
      }
      quant = 1;
    }
  }
  for(int i = indiceMaior-quantMaior; i < indiceMaior; i++){
    printf("%d ", a[i]);
  }
  return 0;
}
