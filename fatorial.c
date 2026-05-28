#include <stdio.h>
#include "function_fatorial.c"

int main()
{
    int n = 0;
    long water = 1;

    printf("digite um numero\n");
    scanf("%d", &n);

    water = fatorial(n);

    printf("o fatorial de %d é %d \n", n, water);
    printf("feito por Marcelo Mendes");

    return 0;
}
