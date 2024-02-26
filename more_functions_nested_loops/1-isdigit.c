#include <stdio.h>
#include "main.h"
/**
 * _isdigit - check if c is a digit
 * @c: ascii to test
 * Return: 0 if false
 */
int _isdigit(int c)
{
	if (c < 58 && c > 47)
		return (1);
	else
		return (0);
}
