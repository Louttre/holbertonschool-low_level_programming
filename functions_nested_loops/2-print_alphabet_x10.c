#include "main.h"
/**
 * print_alphabet - alphaprint
 * Return: 0
 */
void print_alphabet_x10(void)
{	
	int b = 0;
	while (b < 10)
	{	
		int a = 97;
		while (a <= 122)
		{	
			_putchar(a);
			a++;
		}
		_putchar('\n');
		b++;
	}
}
