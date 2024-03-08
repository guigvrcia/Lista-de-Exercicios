#include <stdio.h>
#include <stdlib.h>

int main()
{
  int pares = 0, impares = 0, num1, num2, i = 1;

  printf("Digite o primeiro valor:\n");
  scanf("%d", &num1);

  printf("Digite o segundo valor:\n");
  scanf("%d", &num2);

  while (i <= num1 && i <= num2) {
    if (i % 2 == 0) {
      pares += i;
    }
    i++;
  }

  i = 1; 

  while (i <= num1 && i <= num2) {
    if (i % 2 != 0) {
      impares += i;
    }
    i++;
  }

  printf("A soma dos numeros pares entre o primeiro numero e o segundo numero eh: %d\n", pares);
  printf("A soma dos numeros impares entre o primeiro numero e o segundo numero eh: %d\n", impares);

  return 0;
}