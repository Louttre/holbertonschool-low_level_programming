#include "main.h"
/**
 * _memset -  function that fills memory with a constant byte
 * @s: pointer to the array
 * @b: fill with b
 * @n: number of byte to fill
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
