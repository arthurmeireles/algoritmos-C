#include <stdio.h>
int main(void) {
  float entrada, troca, arrayInicial[20], arrayResultante[20];
  for(int i = 0 ; i<20 ; i++){
    scanf("%f", &entrada);
    arrayInicial[i] = entrada;
    arrayResultante[i] = entrada;
  }
  for(int i = 0 ; i<10 ; i++){
    troca= arrayResultante[i];
    int indiceTroca= 19-i;
    arrayResultante[i]=arrayResultante[indiceTroca];
    arrayResultante[indiceTroca] = troca;
  }
  for (int i=0; i<20; i++){
    printf("%.0f ", arrayInicial[i]);
  }  
  printf("\n ------------------------------- \n");
  for (int i=0; i<20; i++){
    printf("%.0f ", arrayResultante[i]);
  }
  return 0;
}
