#include <stdio.h>
#include <stdlib.h>

int main()
{
  int N, soma = 0, i = 1;

  printf("Digite um numero inteiro positivo:\n");
  scanf("%d",&N);

  i = 1;
  while (i <= N) {
    soma = soma +i;
    i++;
  }

  printf("A soma dos %d primeiro numeros naturais eh: %d\n", N, soma);

  return 0;

}