#include <stdio.h>
int main(void) {
	int hora, minuto, passados;
  printf("Digite a hora atual: ");
	scanf("%d", &hora);
  printf("Digite os minutos: ");
	scanf("%d", &minuto);
	passados = minuto +(hora*60);
  printf("Foram decorridos após as 00:00: %d minutos", passados);
	return 0;
}

