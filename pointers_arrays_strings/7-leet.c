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
 * leet - encrypt the string
 * @a: string to encrypt
 * Return: a
 */
char *leet(char *a)
{
	int i;
		
	for (; i < _strlen(a); i++)
	{
		if (a[i] == 'A' || a[i] == 'a')
			a[i] = '4';
		else if (a[i] == 'E' || a[i] == 'e')
                        a[i] = '3';
		else if (a[i] == 'O' || a[i] == 'o')
                        a[i] = '0';
		else if (a[i] == 'T' || a[i] == 't')
                        a[i] = '7';
		else if (a[i] == 'L' || a[i] == 'l')
                        a[i] = '1';
	}
	return (a);
}
