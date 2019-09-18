#include <stdio.h>
int main(void) {
  int arrayMatriculas[30], trocaMatricula;
  float arrayNotas[30], trocaNota;
  for(int i = 0; i < 30; i++){
    printf("Digite sua Matricula ");
    scanf("%d", &arrayMatriculas[i]);
    printf("Digite sua Nota ");
    scanf("%f", &arrayNotas[i]);
  }
  for(int i=0; i<29; i++){
    int b = i+1;
    for(int h = b ; h<30; h++){
      if(arrayMatriculas[i]>arrayMatriculas[h]){
        trocaMatricula = arrayMatriculas[i];
        arrayMatriculas[i] = arrayMatriculas[h];
        arrayMatriculas[h] = trocaMatricula;
        trocaNota = arrayNotas[i];
        arrayNotas[i] = arrayNotas[h];
        arrayNotas[h] = trocaNota;
      }
    }
  }
  for(int i = 0; i<30;i++){
    printf("Matricula = %d \n Nota = %.2f \n", arrayMatriculas[i], arrayNotas[i]);
  }
  return 0;
}
