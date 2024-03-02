// Faca um programa que leia 10 inteiros e imprima sua media.

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i, valor, soma = 0, media;

  printf("Digite 10 valores inteiros para calcular sua media:\n");

  for ( i = 0; i < 10; i++){
    scanf("%d\n", &valor);
    soma += valor;
  }

  media = soma / 10;

  printf("A media dos 10 inteiros digitados eh:%d\n", media);

  return 0;
}