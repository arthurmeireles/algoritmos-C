#include <stdio.h>
int main(void) {
  int quantAprovados=0;
  float mediaTurma, entrada, somaNotas = 0;
  int numeros[30];
  for(int i =0 ; i<30; i++){
    scanf("%f", &entrada);
    numeros[i] = entrada;
    if (entrada >= 60){
      quantAprovados++;
    }
    somaNotas +=entrada;
  }
  float aprovados[quantAprovados];
  int contador = 0;
  for(int i=0; i<30; i++){
    if (numeros[i] >= 60){
      aprovados[contador] = numeros[i];
      contador++;
    }
  }
  mediaTurma = somaNotas/30;
  printf("A média da turma é %.2f \n ", mediaTurma);  
  printf("A quantidade de aprovados é %d \n ", quantAprovados);
  for(int i=0; i<quantAprovados; i++){
    printf("%.2f ", aprovados[i]);
  }
  return 0;
}
