#include "main.h"
#include <stdio.h>

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
