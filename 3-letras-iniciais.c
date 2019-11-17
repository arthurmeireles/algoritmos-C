#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
  char nome[80];
  gets(nome);

  printf("%c", nome[0]);  
  printf("%c", nome[1]);
  printf("%c", nome[2]);
  return 0;
}
