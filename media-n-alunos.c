 #include <stdio.h>
int main(void) {
  float n1, n2, media;
  while(n1 != -1 && n2 != -1) {
      scanf("%f", &n1);
      if(n1 == -1){
        break;
      }
      scanf("%f", &n2);
      if(n2 == -1){
        break;
      }
      media = (n1+n2) /2;
      if(media>=6){
        printf("Aprovado\n");
      }
      if(media<6){
        printf("Reprovado\n");
      }
  }  
  return 0;
}
