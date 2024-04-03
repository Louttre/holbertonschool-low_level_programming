#include "main.h"
#include <stdio.h>
/**
 * flip_bits - function that returns the number of bits to flip
 * @n: The number
 * @m: The number to flip n to
 * Return: The necessary number of bits to flip to get from n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i = 0;
	int o;

	o = n ^ m;
	while (o)
	{
		if (o & 1)
			i++;
		o = o >> 1;
	}
	return (i);
}
