#include "main.h"
/**
 * _islower - what a function
 * Return: 0
 * @c: is an int
 */
int _islower(int c)
{
	if (c <= 122 && c >= 97)
		return (1);
	else
		return (0);
}
