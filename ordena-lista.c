#include <stdio.h>
int main(void) {
  int a1[10], trocaPosicao;
  printf("Digite os números \n");
  for(int i = 0; i < 10; i++){
    scanf("%d", &a1[i]);
  }
  for(int i=0; i<9; i++){
    int b = i+1;
    for(int h = b ; h<10; h++){
      if(a1[i] > a1[h]){

        trocaPosicao = a1[i];
        a1[i] = a1[h];
        a1[h] = trocaPosicao;

      }
    }
  }
  for(int i = 0; i<10;i++){
    printf("%d \n", a1[i]);
  }
  return 0;
}
