#include <stdio.h>

int main(void) {
	float a, b, media;
	int c, d;
  
	printf("Digite o valor da nota 1: ");
	scanf("%f", &a);
	printf("Digite o valor da nota 2: ");
	scanf("%f", &b);


	printf("Digite o peso da nota 1: ");
	scanf("%d", &c);
	printf("Digite o peso da nota 2: ");
	scanf("%d", &d);


	media = ((a * c)+(b*d))/(c+d);
 	printf("Sua média é: %.2f", media);
	return 0;
}
