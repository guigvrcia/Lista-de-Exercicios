#include <stdio.h>
#include <stdlib.h>

int main() 
{
  int num;

  printf("Digite um numero para encontrar os multiplos de 11, 13 ou 17:\n");
  scanf("%d", &num);

  num++;
  while (num % 11 != 0 && num % 13 != 0 && num % 17 != 0) {
    num++;
  }
  
  printf("O primeiro multiplo de 11, 13 ou 17 eh: %d\n", num);
   return 0;
 }