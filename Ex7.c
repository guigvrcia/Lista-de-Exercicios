// Faca um programa que leia 10 inteiros positivos, ignorando nao positivos, e imprima sua media.

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int leia = 0, soma = 0, num;
  float media;

  printf("Digite 10 numeros positivos para calcular sua media:\n");
  
  while (leia < 10) {
    scanf("%d", &num);

    if (num > 0) {
      soma += num;
      leia++;
    }
  }
  if (leia > 0) {
    media = soma / 10;
    printf("A media dos 10 numeros positivos digitados eh: %.2f\n", media);
  } else {
    printf("Nenhum numero positivo foi digitado.");
  }

  return 0;
}