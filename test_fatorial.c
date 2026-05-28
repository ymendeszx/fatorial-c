#include <stdio.h>
#include "function-fatorial.c"

int main() {
    int n;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Fatorial nao definido para numeros negativos.\n");
        return 1;
    }

    printf("%d! = %d\n", n, fatorial(n));

    return 0;
}
