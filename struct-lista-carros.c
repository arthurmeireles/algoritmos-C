//falta resolver o problema do nome

#include <stdio.h>
#include <string.h>

struct Carro{
  // char marca[80], cor[80];
  int anoFabricacao, anoModelo;
  float preco;
};

int main(void) {
  struct Carro carros[20];
  int contadorCarros = 0;
  while(1>0){
    printf("Digite [0] para finalizar \n");
    printf("Digite [1] para listar \n");
    printf("Digite [2] para adicionar um carro \n");

    int entradaMenu;
    scanf("%d", &entradaMenu);

    if(entradaMenu==0){
      break;
    }
    if(entradaMenu==1){
      for(int i = 0; i < contadorCarros; i++){
        // printf("Marca: %s \n", carros[i].marca);
        // printf("Cor: %s \n", carros[i].cor);
 
 
        printf("Ano de Fabricação: %d \n", carros[i].anoFabricacao);
     
        printf("Modelo do ano: %d \n", carros[i].anoModelo);

        printf("Preço do carro: \n", carros[i].preco);
      }
    }
    if(entradaMenu==2){
      struct Carro carro;
      // carro.marca = 'batata';
      // carro.cor = 'batata';
      printf("Digite o ano de fabricação do carro:");
      scanf("%d", &carro.anoFabricacao);

      printf("Digite o ano do modelo:");
      scanf("%d", &carro.anoModelo);

      printf("Digite o preço deste carro:");
      scanf("%f", &carro.preco;
      contadorCarros++;
    }
  }
  return 0;
}
