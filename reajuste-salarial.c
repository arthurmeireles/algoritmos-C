#include <stdio.h>

int main(void) {
	float salario;
  
  printf("Digite o valor do salario: ");
	scanf("%f", &salario);

	salario = (salario*6/100) + salario;
  printf("Seu novo salario é: %.2f", salario);
	return 0;
}
