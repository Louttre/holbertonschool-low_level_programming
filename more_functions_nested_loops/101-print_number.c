#include "main.h"
#include <limits.h>
/**
 * _pow - a pow b
 * @a: int
 * @b: pow
 * Return: apowb
 */
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
/**
 * print_number - turn int to char
 * @n: number to print
 */
void print_number(int n)
{
	int j = n;
	int test = n;
	int i = 0;
	int temp;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
		j = -j;

		if (n == INT_MIN)
		{
			test = 2147483647;
			j = test;
		}
	}
	while (j >= 10)
	{
		j /= 10;
		i++;
	}
	for (; i >= 0; i--)
	{
		if (n == INT_MIN)
		{
			if (i == 0)
			{
				_putchar(8 + '0');
				break;
			}
			temp = test / _pow(10, i);
			_putchar((temp % 10) + '0');
		}
		else
		{
			temp = n / _pow(10, i);
			_putchar((temp % 10) + '0');
		}
	}
}
