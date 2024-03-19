#include <stdio.h>
#include <stdlib.h>

int main()
{
  int N, i;
  double E = 2.0;

  printf("Digite um valor inteiro e positivo:\n");
  scanf("%d", &N);

  for (i = 1; i <= N; i++) 
  {
    E = (2 * i + 2.0) / (2 * i + 1.0);
  }
  printf("O valor de E eh: %f\n", E);

  return 0;
}