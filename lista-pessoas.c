//falta resolver o problema do nome

#include <stdio.h>
#include <string.h>

struct nascimento{
  int dia, mes, ano;
};

struct pessoa{
  // char nome[80];
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
    scanf("%d", &entradaMenu);

    if(entradaMenu==0){
      break;
    }
    if(entradaMenu==1){
      for(int i = 0; i < contadorCadastros; i++){
        // printf("Nome: %s \n", pessoas[i].nome);
        printf("Peso: %.2f \n", pessoas[i].peso);
        printf("Altura: %.2f \n", pessoas[i].altura);
        printf("Data nascimento: %2.d / %2.d / %d \n", pessoas[i].dataNascimento.dia, pessoas[i].dataNascimento.mes, pessoas[i].dataNascimento.ano);
      }
    }
    if(entradaMenu==2){
      struct pessoa a;
      // a.nome = 'batata';
      scanf("%f", &a.peso);
      scanf("%f", &a.altura);
      scanf("%d %d %d", &a.dataNascimento.dia, &a.dataNascimento.mes,&a.dataNascimento.ano);
      pessoas[contadorCadastros] = a;
      contadorCadastros++;
    }
  }
  return 0;
}
