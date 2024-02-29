#include "main.h"
#include <stdio.h>
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
 * string_toupper - convert lower to upper
 * @a: string to convert
 * Return: a
 */
char char_toupper(char a)
{	
	if (a > 96 && a < 123)
		a -= 32;
	
	return (a);
}
/**
 * cap_string - upper first letter of a word
 * @a: array
 */
char *cap_string(char *a)
{
	int i;
	char tab[13] = " !(),.;?{}\"	 ";
	
	for (i = 0; i < _strlen(a); i++)
	{
		int j = 0;

		for (; j < _strlen(tab); j++)
		{
			if (a[i] == tab[j] && a[i + 1] != '\0')
			{
				a[i + 1] = char_toupper(a[i + 1]);	
			}
		}
	}
	return (a);
}
