#include "paridad.h"

int esPar(int* n)
{
	if(*n % 2 == 0)
		return ES_PAR;
	
	return NO_ES_PAR;
}