#include <stdio.h>

int fatorial(n){
  if(n <= 1){
    return 1;
  }
  else{
    return n*fatorial(n-1);
  }
};
int main(void) {
  printf("Digite o N para saber seu fatorial\n");
  int n;
  scanf("%d", &n);
  printf("O fatorial é %d", fatorial(n));
  return 0;
}
