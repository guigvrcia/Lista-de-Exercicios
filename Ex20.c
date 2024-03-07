#include <stdio.h>
#include <stdlib.h>

int main(){

  int inteiro, dadoslidos = 0, valorespares = 0;

  do {
    printf("Digite um numero inteiro:\n");
    scanf("%d", &inteiro);
    if (inteiro != 1000) {
      dadoslidos++;
      if (inteiro %2 == 0) {
        valorespares++;
      }
    }
  } while (inteiro != 1000);

  printf("O numero de valores lidos eh: %d\n", dadoslidos);
  printf("O numero de valores pares eh: %d\n", valorespares);

  return 0;

}