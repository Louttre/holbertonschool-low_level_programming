#include "main.h"
/**
 * print_chessboard - print a chessboard
 * @a: number of case
 */
void print_chessboard(char (*a)[8])
{
	unsigned int i = 0;

	while (*a[i] != '\0')
	{
		unsigned int j = 0;

		for (; j <= 7; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
		i++;
	}
}
