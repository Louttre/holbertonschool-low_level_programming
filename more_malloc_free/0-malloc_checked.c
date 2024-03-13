#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: number of bytes
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	if (b == 0)
		exit(98);
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
