#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - function that allocates memory
 * @b: unsigned int
 * Return: a
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *a;

	a = malloc(sizeof(unsigned int));
	if (a == NULL)
		exit(98);
	*a = b;
	return (a);
}
