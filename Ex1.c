#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont = 0, num = 3;

    printf("Os 5 primeiro multiplos de 3 maiores do que 0 sao:\n");

    while (cont < 5) {
        printf("%d\n", num);
        num += 3;
        cont++;
    }

    return 0;
}
