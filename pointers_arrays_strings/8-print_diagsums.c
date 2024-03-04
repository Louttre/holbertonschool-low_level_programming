#include "main.h"
#include <math.h>
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals
 * @a: pointer to square matrix
 * @size: size of square
 */
void print_diagsums(int *a, int size)
{
	int i = 0;
	int rez = 0;
	int index;
	int rez2 = 0;

	for (; i < size; i++)
	{
		index = i * size + i;
		rez += a[index];
	}
	for (i = size; i > 0; i--)
	{
		index = i * size - i;
		rez2 += a[index];
	}
	printf("%d, %d\n", rez, rez2);
}
