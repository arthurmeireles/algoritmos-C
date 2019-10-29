#include <stdio.h>
#include <string.h>

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
  int contadorCadastros = 0;
  while(1>0){
    printf("Digite [0] para finalizar \n");
    printf("Digite [1] para listar \n");
    printf("Digite [2] para adicionar uma pessoa \n");

    int entradaMenu;
    fflush(stdin);
    scanf("%d", &entradaMenu);

    if(entradaMenu==0){
      break;
    }

    if(entradaMenu == 1){      
      for(int i = 0; i < contadorCadastros; i++){
        printf("Nome: %s \n", pessoas[i].nome);
        printf("Peso: %.2f \n", pessoas[i].peso);
        printf("Altura: %.2f \n", pessoas[i].altura);
        printf("Data nascimento: %d / %d / %d \n", pessoas[i].dataNascimento.dia, pessoas[i].dataNascimento.mes, pessoas[i].dataNascimento.ano);
      }
    }
    if(entradaMenu==2){
      printf("Digite seu nome: \n");
      scanf("%s", &pessoas[contadorCadastros].nome);
      fflush(stdin);
      printf("Digite seu peso: \n");
      scanf("%f", &pessoas[contadorCadastros].peso);
      printf("Digite sua altura: \n");
      scanf("%f", &pessoas[contadorCadastros].altura);

      printf("Digite sua data de nascimento: \n");
      scanf("%d %d %d", &pessoas[contadorCadastros].dataNascimento.dia, &pessoas[contadorCadastros].dataNascimento.mes, &pessoas[contadorCadastros].dataNascimento.ano);
      
      contadorCadastros++;
    }
  }
  return 0;
}
