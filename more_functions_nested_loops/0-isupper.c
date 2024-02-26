#include <stdio.h>
#include "main.h"
/**
 * _isupper - check if c is uppercase
 * @c: convert char in int
 * Return: 0 if false
 */
int _isupper(int c)
{
	if (c < 91 && c > 64)
		return (1);
	else
		return (0);
}
