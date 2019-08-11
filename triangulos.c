#include <stdio.h>
int main(void) {
  int l, l1, l2; 
  scanf("%d %d %d", &l, &l1, &l2);
  if(l==l1 && l!=l2 || l==l2 && l!=l1 || l1==l2 && l1!=l){
    printf("Triangulo isosceles");
  }
  if(l==l1 && l==l2){
    printf("Triangulo equilatero");
  }
  if(l!=l1 && l!=l2 ){
    printf("Triangulo escaleno");
  }
  return 0;
}
