#include <assert.h>
#include <stdio.h>
#include "function_fatorial.c"

int main() 
{
    printf("TESTE AUTOMATIZADO\n");
    
    assert(fatorial(0)==1);
    assert(fatorial(1)==1);
    assert(fatorial(6)==720);
    
    printf("\nTestes concluídos");
    printf("Criado por: Marcelo Mendes");
}
