#include <stdio.h>
#include "main.h"
/**
 * _strlen - count number of case in array
 * @s: string to count
 * Return: i
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * puts_half - print a char
 * @str: array of the string
 */
void puts_half(char *str)
{
	int j = _strlen(str) / 2;

	if (_strlen(str) % 2 == 1)
		j = (_strlen(str) + 1) / 2;
	while (str[j] != '\0')
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
