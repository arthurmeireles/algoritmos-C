
#include <stdio.h>
int main(void) {
  int a1[3];
  int a2[3];
  int a3[6];
  int igual = 0, entrada;
  printf("Digite os valores inteiros do array 1 \n");
  for(int i = 0; i<3 ; i++){
    scanf("%d",&a1[i]);
  }
  printf("Digite os valores inteiros do array 2 \n");
  for(int i = 0 ; i<3 ; i++){
    scanf("%d",&a2[i]);
  }
  for(int i = 0; i < 3 ; i++){
    a3[i] = a1[i];
  }
  int b = 2;
  int ll=3;
  for(int i = 0; i < 3 ; i++){
    igual=0;
    for(int h = 0; h<b; h++){
      if(a2[i] == a3[h]){
        igual++;
      }
    }
    if (igual==0){
      a3[ll++]=a2[i]; 
      b++;
    }
  }
  printf("B = %d \n", b);
  printf("ll = %d \n", ll);
  printf("Lista de iguais: ");
  for (int i = 0; i<ll ; i++){
    printf("%d ", a3[i]);
  } 
  return 0;
}
