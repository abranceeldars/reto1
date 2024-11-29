#include <assert.h>
#include "esPar.h"

void test_esPar()
{
    int n;

    // Caso 1: Número par
    n = 4;
    assert(esPar(&n) == ES_PAR);

    // Caso 2: Número impar
    n = 7;
    assert(esPar(&n) == NO_ES_PAR);

    // Caso 3: Cero (considerado par)
    n = 0;
    assert(esPar(&n) == ES_PAR);

    // Caso 4: Número negativo par
    n = -2;
    assert(esPar(&n) == ES_PAR);

    // Caso 5: Número negativo impar
    n = -3;
    assert(esPar(&n) == NO_ES_PAR);

    printf("Todas las pruebas pasaron con éxito.\n");
}

int main()
{
    test_esPar();
    return 0;
}
