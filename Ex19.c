#include <stdio.h>
#include <stdlib.h>

int main()
{
  int ler, menor = 100, maior = 999;

  printf("Digite um numero entre 100 e 999:\n");
  scanf("%d", &ler);

do {
  printf("Os algarismos que compoe o numero sao:\n");
  printf("%d\n", (ler / 100) % 10);
  printf("%d\n", (ler / 10) % 10);
  printf("%d\n", ler % 10);
  break;
} while (ler >= menor && ler <= maior);

  return 0;
}