#include <stdio.h>
#include <string.h>

struct Carro{
  char marca[80], cor[80];
  int anoFabricacao, anoModelo;
  float preco;
};

int main(void) {
  struct Carro carros[20];
  int contadorCarros = 0;
  int entradaMenu;
  while(1>0){
    printf("Digite [0] para finalizar \n");
    printf("Digite [1] para listar \n");
    printf("Digite [2] para adicionar um carro \n");

    scanf("%d", &entradaMenu);

    if(entradaMenu==0){
      break;
    }
    if(entradaMenu==1){
      for(int i = 0; i < contadorCarros; i++){
        printf("Marca: %s \n", carros[i].marca);
        printf("Cor: %s \n", carros[i].cor);
        printf("Ano de Fabricação: %d \n", carros[i].anoFabricacao);
        printf("Modelo do ano: %d \n", carros[i].anoModelo);
        printf("Preço do carro: %.2f \n", carros[i].preco);
      }
    }
    if(entradaMenu==2){

      printf("Digite a marca do seu carro:\n");
      scanf("%s", &carros[contadorCarros].marca);
            
      printf("Digite a cor do seu carro:\n");
      scanf("%s", &carros[contadorCarros].cor);

      printf("Digite o ano de fabricação do carro:\n");
      scanf("%d", &carros[contadorCarros].anoFabricacao);

      printf("Digite o ano do modelo:\n");
      scanf("%d", &carros[contadorCarros].anoModelo);

      printf("Digite o preço deste carro:\n");
      scanf("%f", &carros[contadorCarros].preco);

      contadorCarros++;
    }
  }
  return 0;
}
