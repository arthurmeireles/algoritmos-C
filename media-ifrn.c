#include <stdio.h>

int main(void) {
  float n1, n2, media;
  scanf("%f", &n1);
  scanf("%f", &n2);

  media= ((n1*2)+(n2*3))/5;

  if(media>=60){
    printf("%.2f Aluno Aprovado", media);
  }
  else{
    printf("%.2f Aluno não Aprovado", media);
  }
  return 0;
}
