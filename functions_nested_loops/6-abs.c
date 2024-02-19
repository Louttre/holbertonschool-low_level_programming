#include "main.h"
/**
 * _abs - absolute
 * @n: it's an int
 * Return: 0
 */
int _abs(int n)
{
	if (n < 0)
		return (-1 * n);
	else if (n >= 0)
		return (n);
	return (0);
}

