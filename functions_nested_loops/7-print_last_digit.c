#include "main.h"
/**
 * print_last_digit - modulo10
 * @n: int
 * Return: m
 */
int print_last_digit(int n)
{
	int m = n % 10;

	if (m < 0)
		m = -m;
	_putchar(m + '0');
	return (m);
}
