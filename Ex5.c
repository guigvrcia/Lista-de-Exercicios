// Faca um programa que peca ao usuario para digitar 10 valores e some-os.

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i, valor, soma;

  printf("Digite 10 numeros para ter seus valores somados:\n");

  for ( i = 0; i < 10; i++) {
    scanf("%d", &valor);
    soma += valor;
  }
 
  printf("Os valores somados resultam em:%d\n", soma);

  return 0;
}