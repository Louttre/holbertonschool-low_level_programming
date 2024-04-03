#include "main.h"
#include <stdio.h>
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i = 0;
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
