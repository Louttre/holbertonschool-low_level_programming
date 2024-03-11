#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i = 0;

	p = malloc(nmemb * size);
	if (size == 0 || nmemb == 0)
		return (NULL);
	for (;i < nmemb; i++)
	{
		p[i] = 0;
	}
	return (p);
}
