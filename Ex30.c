#include <stdio.h>
#include <stdlib.h>

int main()
{
  int N, i, soma = 0;

  printf("Digite o um valor para atribuir a N:\n");
  scanf("%d", &N);

  // Calcula a primeira sequência:
  for (i = 1; i <= N; i++) {
    soma += i;
  }
  printf("A soma da primeira sequencia eh: %d\n", soma);

  // Calcula a segunda sequência:
  soma = 0;
  for (i = 1; i <= 2*N - 1; i++) {
    if (i % 2 == 0) {
      soma -= i;
    } else {
      soma += i;
    }
  }
  printf("A soma da segunda sequencia eh: %d\n", soma);

  // Calcula a terceira sequência:
  soma = 0;
  for (i = 1; i <= 2*N - 1; i += 2) {
    soma += i;
  }
  printf("A soma da terceira sequencia eh: %d\n", soma);

  return 0;
}