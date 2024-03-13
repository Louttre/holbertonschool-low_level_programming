#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
<<<<<<< HEAD
 * malloc_checked - allocates memory using malloc
 * @b: number of bytes
 * Return: a pointer to the allocated memory
=======
 * malloc_checked - function that allocates memory
 * @b: unsigned int
 * Return: ptr
>>>>>>> refs/remotes/origin/main
 * if it fails, cause normal process termination with a status value of 98
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
