#include <stdio.h>

int main(void) {
	int a, b, total;
  
  printf("Digite um numero inteiro: ");
	scanf("%d", &a);
	printf("Digite outro numero inteiro: ");

  scanf("%d", &b);
	total = a+b;
  
  printf("Total da soma %d", total);
	return 0;
}
