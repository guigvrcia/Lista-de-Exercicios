#include <stdio.h>
#include <stdlib.h>

int main()
{
  int N, i = 1;

  printf("Digite um numero inteiro impar:\n");
  scanf("%d", &N);

  while (i <= N) {
    if (i % 2 != 0) {
      printf("%d\n", i);
    }
    i++;
  }

  return 0;
}