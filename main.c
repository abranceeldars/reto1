#include <stdio.h>
#include "esPar.h"

int main()
{
    int n;
    printf("Introduce un número: ");
    scanf("%d", &n);
    int result = esPar(&n);

    if (result == ES_PAR)
        printf("El número es par.\n");
    else
        printf("El número no es par.\n");

    return 0;
}
