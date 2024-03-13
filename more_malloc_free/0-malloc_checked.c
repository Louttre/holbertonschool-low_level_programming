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
	void *ptr = malloc(b);

<<<<<<< HEAD
	if (ptr == NULL)
	{
=======
	if (a == NULL)
>>>>>>> refs/remotes/origin/main
		exit(98);
	}
	return (ptr);
}
