#include <stdio.h>
#include <stdlib.h>

int main()
{
  int N, i;

  printf("Digite um numero inteiro positivo par:\n");
  scanf("%d", &N);

  i = N;

  while (i >= 0) {
    if (i % 2 == 0) {
      printf("%d\n", i);
    }
    i -= 2; 
  }
  return 0;
}