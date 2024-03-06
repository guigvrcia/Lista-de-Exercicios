// Faca um programa que leia um numero inteiro positivo N e imprima todos os numeros naturais de 0 ate N em ordem decrescente.

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i, N;

  printf("Digite um numero inteiro positivo:\n");
  scanf("%d", &N);

  for (i = N; i >= 0; i--) {
    printf("%d\n", i);
  }

  return 0;
}