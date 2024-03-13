#include "main.h"
#include <stdlib.h>
/**
 * array_range - function that creates an array of integers
 * @min: minimum of the array
 * @max: maximum of the array
 * Return: p
 */
int *array_range(int min, int max)
{
	int size = max - min + 1;
	int *p = malloc(size * sizeof(int));
	int i;

	if (min > max)
		return (NULL);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		p[i] = min++;
	return (p);
}
