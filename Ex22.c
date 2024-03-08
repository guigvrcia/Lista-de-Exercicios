#include <stdio.h>
#include <stdlib.h>

int main()
{
  float media = 0, soma = 0, notas, i;

    printf("Digite a nota do aluno dentro do intervalo de 10 a 20. Numero menor que 10 ou maior que 20 fara o programa se encerrar:\n");
    scanf("%f", &notas);

  while (notas >= 10 && notas <= 20) {
    soma += notas;
    i++; 
    printf("Digite a nota do aluno:\n");
    scanf("%f", &notas);
  }

  media = soma / i; 

  printf("A media de notas do aluno eh: %.2f\n", media);
    
  return 0;
}