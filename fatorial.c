#include <stdio.h>

int main() {
    int n, fatorial = 1;
    
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    
    if (n < 0) {
        printf("Fatorial nao e definido para numeros negativos.\n");
    } else {
        for (int i = 1; i <= n; i++) {
            fatorial *= i;
        }
        
        printf("O fatorial de %d e %d.\n", n, fatorial);
    }
    printf("criado por marcelo mendes")
    return 0;
}