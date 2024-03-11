#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void *malloc_checked(unsigned int b)
{
	unsigned int* a;
	
	a = malloc(sizeof(unsigned int));
	*a = b;	
	return (a);
}
