#include <stdio.h>
#include "main.h"

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;
	
	if(!n)
		return (-1);
	while (i < index)
	{
		n /= 2;
		i++;
	}
	i = n % 2;
	return (i);
}
