#include <stdlib.h>
#include "main.h"
#include <stdio.h>

int *array_range(int min, int max)
{
    	int size = max - min + 1;
    	int *p = malloc(size * sizeof(int));
	int i;	
    	
	if (min > max) 
	{
        	return NULL;
    	}
    	if (p == NULL) 
	{
        	return NULL;
    	}
    	for (i = 0; i < size; i++) 
	{
        	p[i] = min + i;
    	}
    	return (p);
}
