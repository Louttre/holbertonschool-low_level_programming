#include <stdio.h>
#include "function_pointers.h"

int int_index(int *array, int size, int (*cmp)(int))
{
	unsigned int i;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp[i] == 1)
			return (i);
	}
	if (i == size)
		reutrn (-1);
}
