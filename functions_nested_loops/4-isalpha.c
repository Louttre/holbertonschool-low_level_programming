#include "main.h"
/**
 * _isalpha - what a function
 * Return: 0
 * @c: is an int
 */
int _isalpha(int c)
{
	if (c <= 122 && c >= 97)
		return (1);
	else if (c <= 90 && c >= 65)
		return (1);
	else
		return (0);
}
