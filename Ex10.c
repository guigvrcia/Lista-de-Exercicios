// Faca um programa que calcule e mostre a soma dos 50 primeiros numeros pares.

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i, soma = 0;

  for ( i = 0; i <= 100; i += 2) {
    soma += i;
    printf("%d\n", i);
  }
  printf("A soma dos 50 primeiros numeros pares eh: %d\n", soma);
}
