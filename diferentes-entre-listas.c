#include <stdio.h>
int main(void) {
  int a1[10], a2[10], diferentes = 0, entrada;
  printf("Digite os valores inteiros do array 1 \n");
  for(int i = 0 ; i<10 ; i++){
    scanf("%d", &entrada);
    a1[i] = entrada;
  }
  printf("Digite os valores inteiros do array 2 \n");
  for(int i = 0 ; i<10 ; i++){
    scanf("%d", &entrada);
    a2[i] = entrada;
  }
  for(int i = 0; i < 10 ; i++){
    for(int h = 0; h<10; h++){
      if(a1[i]!=a2[h]){
        diferentes++;
      }
    }
  }
  for(int i = 0; i < 10 ; i++){
    for(int h = 0; h<10; h++){
      if(a2[i]!=a1[h]){
        diferentes++;
      }
    }
  }
  int a3[diferentes];
  a3[0] = a1[0];
  int indiceA3 = 1;
  for(int i = 1; i < 10 ; i++){
    for(int b = 0; b<diferentes; b++){
      if(a1[i] != a3[b]) {
        a3[indiceA3] = a1[i];
        indiceA3++;
      }
    }
  }
  for(int i = 0; i < 10 ; i++){
    for(int b = 0; b<diferentes; b++){
      if(a2[i] != a3[b]) {
        a3[indiceA3] = a2[i];
        indiceA3++;
      }
    }
  }
  printf("Lista de iguais");
  for (int i = 0; i<diferentes ; i++){
    printf("%d ", a3[i]);
  } 
  return 0;
}
