#include "main.h"
#include <string.h>
/**
 * _puts_recursion - print a string
 * @s: string to print
 */
void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
