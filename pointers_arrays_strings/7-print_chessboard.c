#include "main.h"
/**
 * print_chessboard - print a chessboard
 * @a: number of case
 */
void print_chessboard(char (*a)[8])
{
	unsigned int i,j = 0;

	while (*a[i] != '\0')
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
		i++;
	}
}
