#include <stdio.h>

int main(void) {
	float a, b, media;
  
  printf("Digite o valor da nota 1: ");
	scanf("%f", &a);
	printf("Digite o valor da nota 2: ");
  scanf("%f", &b);
	media = ((a * 2)+(b*3))/5;
  printf("Sua média é: %.2f", media);
	return 0;
}
