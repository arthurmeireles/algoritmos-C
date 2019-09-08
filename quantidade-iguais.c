#include <stdio.h>
int main(void) {
  int A1[50], diferentes = 0, entrada;
  printf("Digite os 50 valores inteiros \n");
  for(int i = 0 ; i<50 ; i++){
    scanf("%d ", &entrada);
    A1[i] = entrada;
  }
  for(int i = 0; i < 50 ; i++){
    int a = 0, b=0;
    while(a != 50){
      if(A1[i] == A1[a]){
        b++;
      }
    }
    if(b==1){
      diferentes++;
    }
  }
  printf("O total de diferentes é = %d \n", diferentes);
  return 0;
}

//tem um erro
//testar mudando o tamanho doarray para ser rapido
