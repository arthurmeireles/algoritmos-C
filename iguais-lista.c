#include <stdio.h>
int main(void) {
  int a1[10], a2[10], iguais = 0, entrada;
  printf("Digite os valores inteiros do array 1 \n");
  for(int i = 0 ; i<10 ; i++){
    scanf("%d ", &entrada);
    a1[i] = entrada;
  }
  printf("Digite os valores inteiros do array 2 \n");
  for(int i = 0 ; i<10 ; i++){
    scanf("%d ", &entrada);
    a2[i] = entrada;
  }
  for(int i = 0; i < 10 ; i++){
    for(int h = 0; h<10; h++){
      if(a1[i]==a2[h]){
        iguais++;
      }
    }
  }
  int a3[iguais];
  int indice = 0;
  for(int i = 0; i < 10 ; i++){
    for(int h = 0; h<10; h++){
      if(a1[i]==a2[h]){
        a3[indice] = a1[i];
        indice++;
      }
    }
  }
  printf("Lista de iguais");
  for (int i = 0; i<iguais ; i++){
    printf("%d ", a3[i]);
  } 
  return 0;
}
