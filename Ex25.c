#include <stdio.h>
#include <stdlib.h>

int main()
{
  int soma = 0, i = 1;

  while ( i < 1000)
  {
    if (i % 3 == 0 || i % 5 == 0) {
      soma = soma + i;
    }
    i++;
  }
  printf("A soma de todos os multiplos de 3 e 5 abaixo de 1000 eh: %d\n", soma);

  return 0;
}