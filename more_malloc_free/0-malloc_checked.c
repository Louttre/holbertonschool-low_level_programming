#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - function that allocates memory
 * @b: unsigned int
 * Retrun: a
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *a;

	a = malloc(sizeof(unsigned int));
	*a = b;
	return (a);
}
