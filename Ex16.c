#include <stdio.h>
#include <stdlib.h>

int main() {
  int i, N;

  printf("Digite um numero impar inteiro:\n");
  scanf("%d", &N);

  i = N;

  while (i > 0) {
    if (i % 2 != 0) {
      printf("%d\n", i);
    }
    i -= 2;
  }
}