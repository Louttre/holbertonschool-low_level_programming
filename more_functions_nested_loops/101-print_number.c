#include <stdio.h>
#include "main.h"

int _pow(int a, int b)
{
	int temp = a;

	if (b == 0)
		return (1);
	else if (b == 1)
		return (a);
	while (b > 1)
	{
		temp *= a;
		b--;
	}
	return (temp);
}


void print_number(int n)
{
	int j = n;
	int i = 0;
	int temp;
	
	if (n < 0)
	{
		_putchar('-');
		n = -n;
		j = -j;
	}
	while (j >= 10)
	{
		j /= 10;
		i++;
	}
	for (; i >= 0; i--)
	{
		temp = n / _pow(10, i);
		_putchar((temp % 10) + '0');
	}
}
