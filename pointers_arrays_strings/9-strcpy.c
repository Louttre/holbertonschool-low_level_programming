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
 * *_strcpy - print a char
 * @src: array to copy
 * @dest: array where to paste
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (i <= _strlen(src))
	{
		if (i == _strlen(src))
			dest[i] = '\0';
		dest[i] = src[i];
		i++;
	}
	return dest;
}
