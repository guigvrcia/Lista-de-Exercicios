#include <stdio.h>
#include <stdlib.h>

int main()
{
  int inteiro, i = 1;

  printf("Digite um numero positivo:\n");
  scanf("%d", &inteiro);

  printf("Os divisores de %d sao:\n", inteiro);

  for (i = 1; i <= inteiro; i++) {
    if (inteiro % i == 0) {
      printf("%d\n", i);
    }
  }
  return 0;
}