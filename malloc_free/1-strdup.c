#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - function that returns a pointer to a newly allocated space
 * @str: string to cpy
 * Return: pointer to the new tab
 */
char *_strdup(char *str)
{
	char *newstr;
	size_t i = 0;

	if (str == NULL)
		return (NULL);
	newstr = malloc(sizeof(char) * (strlen(str) + 1));
	if (newstr == NULL)
		return (NULL);
	while (i <= strlen(str))
	{
		newstr[i] = str[i];
		i++;
	}
	return (newstr);
}
