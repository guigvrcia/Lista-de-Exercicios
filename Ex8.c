// Escreva um programa que leia 10 numeros e escreva o menor valor lido e o maior valor lido.

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int num, menorvalor, maiorvalor, i;

  printf("Escreva 10 numeros:\n");
  scanf("%d", &num);
  menorvalor = num;
  maiorvalor = num;

  for (i = 1; i < 10; i++) {
    scanf("%d", &num);

    if (num < menorvalor) {
      menorvalor = num;
    }
    if (num > maiorvalor) {
      maiorvalor = num;
    }
  }

  printf("O menor valor eh: %d\n", menorvalor);
  printf("O maior valor eh: %d\n", maiorvalor);

  return 0;
}