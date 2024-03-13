#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - function that returns a pointer to a 2d array
 * @width: widht of the array
 * @height: height of the array
 * Return: pointer of the 2d array
 */
int **alloc_grid(int width, int height)
{
	int **newarray;
	int j = 0;

	if (newarray == NULL)
		return (NULL);
	if (height == 0 || width == 0 || height < 0 || width < 0)
		return (NULL);
	newarray = malloc(sizeof(int *) * height);
	for (; j < height; j++)
	{
		int i = 0;

		newarray[j] = malloc(sizeof(int) * width);
		for (; i < width; i++)
		{
			newarray[j][i] = 0;
		}
	}
	return (newarray);
}
