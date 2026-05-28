#include <stdio.h>
#include "function_fatorial.c"

int main()
{
    int n = 0;
    long skibidi = 1;

    printf("digite um numero\n");
    scanf("%d", &n);

    skibidi = fatorial(n);

    printf("o fatorial de %d é %d \n", n, skibidi);
    printf("feito por Allyson Rodolfo");

    return 0;
}
