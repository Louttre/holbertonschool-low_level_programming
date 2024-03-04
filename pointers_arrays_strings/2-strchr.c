#include "main.h"
#include <stddef.h>
/**
 * _strchr - function that locates a character in a string
 * @s: array where to locate c
 * @c: character to locate in s
 * Return: pointer p that point character adress
 */ 
char *_strchr(char *s, char c)
{
	unsigned int i = 0;
	char *p;
	while (s[i] != c && s[i] != '\0')
	{
		i++;
	}
	if (s[i] != c)
		return (NULL);
	p = &s[i];
	return (p);
}
