#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print to 98
 * @n: valeur entr√
 */
void print_to_98(int n)
{
	int i = n;

	if (n < 98)
	{
		while (i < 98)
		{
			printf("%d, ", i);
			i++;
		}
	}
	else
	{
		while (i > 98)
		{
			printf("%d, ", i);
			i--;
		}
	}
	printf("98");
	putchar('\n');
}
