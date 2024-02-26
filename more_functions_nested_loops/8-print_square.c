#include <stdio.h>
#include "main.h"
/**
 * print_square - print a square made w/ '#'
 * @size: size ofthe square
 */
void print_square(int size)
{
	int i = 0;

	while (i < size)
	{
		int j = 0;

		while (j < size)
		{
			_putchar('#');
			j++;
		}
		i++;
		_putchar('\n');
	}
}
