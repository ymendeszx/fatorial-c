#include <stdio.h>
#include <assert.h>

int fatorial(int n);

int main(void) {
    assert(fatorial(0) == 1);
    assert(fatorial(1) == 1);
    assert(fatorial(6) == 720);

    printf("Todos os testes passaram!\n");
    printf("Criado por Marcelo Mendes Sa");

    return 0;
}
