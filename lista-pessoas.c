#include <stdio.h>

struct nascimento{
  int dia, mes, ano;
};
struct pessoa{
  char nome[80];
  float peso, altura;
  struct nascimento dataNascimento;
};

int main(void) {
  struct pessoa pessoas[50];
  while(1>0){
    printf("Digite [0] para finalizar");
    printf("Digite [1] para listar");
    printf("Digite [2] para adicionar uma pessoa");

    int entradaMenu;
    scanf("%d", &entradaMenu);

    if(entradaMenu==0){
      break;
    }
    if(entradaMenu==1){
      for(int i = 0; i < 50; i++){
        printf("Nome: %s", pessoas[i].nome);
        printf("Peso: %f", pessoas[i].peso);
        printf("Altura: %f", pessoas[i].altura);
        printf("Data nascimento: %d / %d / %d", pessoas[i].dataNascimento.dia, pessoas[i].dataNascimento.mes, pessoas[i].dataNascimento.ano);
      }
    }
    if(entradaMenu==2){
      
    }


  }
  return 0;
}
