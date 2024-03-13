#include "main.h"
#include <stdio.h>
#include <stdlib.h>
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
 * _strdup - function that returns a pointer to a newly allocated space
 * @str: string to cpy
 * Return: pointer to the new tab
 */
char *_strdup(char *str)
{
	char *newstr;
	int i = 0;

	if (str == NULL)
		return (NULL);
	newstr = malloc(sizeof(char) * (_strlen(str) + 1));
	if (newstr == NULL)
		return (NULL);
	while (i <= _strlen(str))
	{
		newstr[i] = str[i];
		i++;
	}
	return (newstr);
}
