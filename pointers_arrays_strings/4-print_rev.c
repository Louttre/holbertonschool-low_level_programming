#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * print_rev - reverse a string
 * @s: string
 */
void print_rev(char *s)
{
	int i;

	for (i = strlen(s); i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
