//Escreva um programa que escreva na tela, de 1 ate 100, de 1 em 1, 3 vezes.
//A primeira vez deve usar a estrutura de repeticao for, a segunda while, e a terceira do while.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;

    printf("Escrevendo de 1 ate 100 utilizando 'for':\n");
    for (i = 0; i <= 100; i++) {
        printf("%d\n", i);
    }

    printf("Escrevendo de 1 ate 100 utilizando 'while':\n");
    i = 1;
    while (i <= 100) {
        printf("%d\n", i);
        i++;
    }

    printf("Escrevendo de 1 ate 100 utilizando 'do while':\n");
    i = 1;
    do {
        printf("%d\n", i);
        i++;
    } while ( i <= 100);

    return 0;
}
