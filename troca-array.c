#include <stdio.h>
int main(void) {
  int troca, A1[8]={1, 2, 3, 4, 5, 6, 7, 8}, A2[8]={10, 12, 13, 14, 15, 16, 17, 18};
  printf("Lista A1 \n");
  for(int i = 0; i < 8 ; i++){
    printf("%d ", A1[i]);
  }  
  printf("\nLista A2 \n");
  for(int i = 0; i < 8 ; i++){
    printf("%d ", A2[i]);
  }
  for(int i = 0; i < 8 ; i++){
    troca = A1[i];
    A1[i] = A2[i];
    A2[i] = troca;
  }
  printf("Nova lista A1 \n");
  for(int i = 0; i < 8 ; i++){
    printf("%d ", A1[i]);
  }  
  printf("\nNova lista A2 \n");
  for(int i = 0; i < 8 ; i++){
    printf("%d ", A2[i]);
  }
  return 0;
}
