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
 * _strncat - fuse two array in one
 * @dest: destination array
 * @src: source array
 * @n: byte
 * Return: ptr which contain dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	char *ptr;

	for (i = 0; i < n; i++)
	{
		if (i > _strlen(src))
			dest[i] = '\0';
		else	
			dest[i] = src[i];	
	}
	ptr = dest;
	return (ptr);
}
