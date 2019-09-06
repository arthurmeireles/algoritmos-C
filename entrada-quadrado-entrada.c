#include <stdio.h>
int main(void) {
  float total,entrada, a1[10], a2[10];
  for(int i = 0 ; i<10; i++){
    scanf("%f", &entrada);
    a1[i] = entrada;
    total = entrada * entrada;
    a2[i] = total;
  }
  for(int i = 0 ; i<10; i++){
    printf("%.2f %.2f \n", a1[i], a2[i]);
  }
  return 0;
}
