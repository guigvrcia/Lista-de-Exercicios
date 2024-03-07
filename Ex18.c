#include <stdio.h>
#include <stdlib.h>

int main()
{
  int num, i, ler, max = -1, count = 0;

  printf("Digite a quantidade de vezes que o numero deve ser lido: \n");
  scanf("%d", &ler);

  for (i = 0; i < ler; i++) {
    printf("Digite um numero:\n");
    scanf("%d", &num);
    if (num > max) {
      max = num;
      count = 1;
    } else if (num == max) {
      count++;
    }
  }

  printf("O maior numero digitaado foi %d e ele foi digitado %d vezes\n", max, count);

  return 0;
}