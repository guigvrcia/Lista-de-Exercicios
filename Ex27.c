#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n, i;
  float soma = 0.0;

  printf("Digite o valor de n para calcular a serie harmonica:\n");
  scanf("%d", &n);

  for (i = 1; i <= n; i++)
  {
    soma += 1.0 / i;
  }
  printf("O valor de H(n) eh: %f\n", soma);

  return 0;  
}