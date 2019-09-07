#include <stdio.h>
int main(void) {
  int total, entrada,A1[8], A2[8], A3[8];
  printf("Digite os valores do array A1 \n");
  for(int i = 0; i < 8 ; i++){
    scanf("%d ", &entrada);
    A1[i] = entrada;
  }  
  printf("Digite os valores do array A2 \n");
  for(int i = 0; i < 8 ; i++){
    scanf("%d ", &entrada);
    A2[i] = entrada;
  }  
  for(int i = 0; i < 8 ; i++){
    A3[i] = A1[i]*A2[i];
  }
  printf("Lista A1 \n");
  for(int i = 0; i < 8 ; i++){
    printf("%d ", A1[i]);
  }
  printf("\nLista A2 \n");
  for(int i = 0; i < 8 ; i++){
    printf("%d ", A2[i]);
  }
  printf("\nLista A3 \n");
  for(int i = 0; i < 8 ; i++){
    printf("%d ", A3[i]);
  }
  return 0;
}
