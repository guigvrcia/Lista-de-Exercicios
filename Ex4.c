// Escreva um programa que declare um inteiro, inicialize-o com 0, e incremente-o de 1000 em 1000, imprimindo seu valor na tela, ate que seu valor seja 100000 (cem mil). 

#include <stdio.h>
#include <stdlib.h>

int  main()
{
  int valor = 0;

  printf("Numero inteiro cujo seu valor sera incrementando de 1000 em 1000 ate que seu novo valor seja cem mil:\n");

  while (valor <= 100000) {
    printf("%d\n", valor);
    valor += 1000;
  }

  return 0;

}