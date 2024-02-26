#include "main.h"
/**
 * print_triangle - print triangle of size(size)
 * @size: size of triangle
 */
void print_triangle(int size)
{
	if (size > 0)
	{
		int i;

		for (i = 1; i <= size; i++)
		{
			int k = size - i;

			while (k > 0)
			{
				_putchar(' ');
				k--;
			}
			while (k < i)
			{
				_putchar('#');
				k++;
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
