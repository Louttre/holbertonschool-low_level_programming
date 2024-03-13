#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: number of bytes
 * Return: a pointer to the allocated memory
 * if it fails, cause normal process termination with a status value of 98
 */
void *malloc_checked(unsigned int b)
{
	void *a = malloc(b);

	if (a == NULL || b == 0)
		exit(98);

	return (a);
}
