// Faca um algoritmo utilizando o comando while que mostra uma contagem regressiva na tela, iniciando em 10 e terminando em 0.
// Mostrar uma mensagem “FIM!” apos a contagem.

#include <stdio.h>
#include <stdlib.h>

int main ()
{
  int i = 10;

  printf("Contagem regressiva iniciando em 10 e terminando em 0:\n");

  while (i > 0) {
    printf("%d\n", i);
    i--;
  }
  printf("!FIM!");

  return 0;
}