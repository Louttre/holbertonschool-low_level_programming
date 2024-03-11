#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int **alloc_grid(int width, int height)
{
	int **newarray;
	int j = 0;
	newarray = (int **)malloc (sizeof(int *) * height);

	for (; j < height; j++)
	{
		int i = 0;
		
		newarray[j] = (int *)malloc (sizeof(int) * width);
		for (; i < width; i++)
		{
			newarray[j][i] = 0;
		}
	}
	return (newarray);
}
