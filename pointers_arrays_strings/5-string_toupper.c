#include "main.h"
#include <stdio.h>
/**
 * string_toupper - convert lower to upper
 * @a: string to convert
 * Return: a 
 */
char *string_toupper(char *a)
{
	int i = 0;

	while (a[i] != '\0')
	{
		if (a[i] > 96 && a[i] < 123)
			a[i] -= 32;
		i++;
	}
	return (a);
}
