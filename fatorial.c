#include <stdio.h>
#include <stdlib.h>

int fatorial(int n);

int main(int argc, char *argv[]) {
    int n;
    int resultado;
    char saida[100];

    if (argc > 1) {
        n = atoi(argv[1]);
    } else {
        printf("Digite um numero inteiro: ");
        scanf("%d", &n);
    }

    resultado = fatorial(n);
    sprintf(saida, "O fatorial de %d e %d\n", n, resultado);
    printf("%s", saida);

    FILE *arquivo = fopen("fatorial.txt", "w");
    if (arquivo != NULL) {
        fprintf(arquivo, "%s", saida);
        fclose(arquivo);
    }

    printf("Criado por Marcelo Mendes Sa");

    return 0;
}
