#include <stdio.h>
#include "main.h"
/**
 * print_array - print n first term of array
 * @a: array
 * @n: limit
 */ 
void print_array(int *a, int n)
{
	int i = 0;
	if (n >= 0)
		while (i < n)
		{
			if (i == n - 1)
				printf("%d\n", a[i]);
			else
			{
				printf("%d, ", a[i]);	
			}
			i++;
		}
	else
		printf("\n");
}
