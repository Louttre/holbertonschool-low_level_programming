#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
