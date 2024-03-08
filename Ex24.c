#include <stdio.h>
#include <stdlib.h>

int main()
{
  int num, soma = 0, current;

  printf("Digite um numero inteiro:\n");
  scanf("%d", &num);

  for (current = 1; current < num; current++){
    if (num % current == 0) {
      soma += current;
    }
  }

  printf("A soma dos divisores dee %d eh: %d\n", num, soma);

  return 0;
}