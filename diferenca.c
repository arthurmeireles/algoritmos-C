#include <stdio.h>
int main(void) {
  int A1[20], a=0, b=1, indiceA = 0, indiceB = 1, diferenca, maiorDiferenca = 0;
  printf("Digite os 20 valores inteiros \n");
  for(int i = 0; i < 20 ; i++){
    scanf("%d ", &diferenca);
    A1[i] = diferenca;
  }
  for(int i = 0; i < 20 ; i++){
    diferenca= A1[b] - A1[a];
    if(maiorDiferenca < diferenca){
      maiorDiferenca = diferenca;
      indiceA = a;
      indiceB = b;
    }
    a++;
    b++;
  }  
  printf("Indice a = %d \n", indiceA);
  printf("Indice b = %d \n", indiceB);
  printf("Valor a = %d \n", A1[indiceA]);
  printf("Valor b = %d \n", A1[indiceB]);
  printf("A maior diferença = %d \n", maiorDiferenca);
  return 0;
}
