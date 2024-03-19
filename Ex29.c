#include <stdio.h>
#include <stdlib.h>

int main() {
  int n, i;
  int a = 0, b = 1, prox;

  printf("Digite um valor inteiro positivo: ");
  scanf("%d", &n);

  for (i = 0; i < n; i++) {
    if (i <= 1)
      prox = i;
    else {
      prox = a + b;
      a = b;
      b = prox;
    }
    printf("%d ", prox);
  }

  printf("\n");

  return 0;
}

