#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i, N, numnaturais = 0;

  printf("Digite um numero inteiro natural:\n");
  scanf("%d", &N);

  for (i = 0; numnaturais <= N; i++) {
    printf("%d\n", numnaturais);
    numnaturais++;
  }
  return 0;
}