#include <stdio.h>

int main(void) {
	int a, b, c, media;
  
  printf("Digite um numero inteiro: ");
	scanf("%d", &a);
	printf("Digite outro numero inteiro: ");
  scanf("%d", &b);
  	printf("Digite outro numero inteiro: ");
  scanf("%d", &c);
	media = (a+b+c)/3;
  
  printf("Sua média é: %d", media);
	return 0;
}
