// Faca um programa que leia um numero inteiro N e depois imprima os N primeiros numeros naturais ımpares.

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n, j = 1, i = 0;

  printf("Digite um numero inteiro: ");
  scanf("%d", &n);

  while (i < n)
  {
    printf("%d\n", j);
    j += 2;
    i++;
  }

  return 0;
}