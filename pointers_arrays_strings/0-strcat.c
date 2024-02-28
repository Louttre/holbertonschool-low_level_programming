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
 * _strcat - fuse two array in one
 * @dest: destination array
 * @src: source array
 * Return: ptr which contain dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;
	char *ptr;

	for (i = 0; i <= _strlen(dest); i++)
	{
		if (dest[i] == '\0')
		{
			while (j <= _strlen(src))
			{
				dest[i] = src[j];
				i++;
				j++;
			}
		}
	}
	ptr = dest;
	return (ptr);
}
