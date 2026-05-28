#include <stdio.h>
#include <assert.h>
#include "function_fatorial.c"

int main()
{
    assert(fatorial(0) == 1);
    assert(fatorial(1) == 1);
    assert(fatorial(6) == 720);
    printf("teste executado com sucesso!");
    return 0;
}
