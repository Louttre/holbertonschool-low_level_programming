#include "main.h"
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
 * str_concat - function function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to the array
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	char *newstr;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	newstr = malloc(sizeof(char) * (_strlen(s1) + _strlen(s2) + 1));
	if (newstr == NULL)
		return (NULL);
	while (i < _strlen(s1))
		{
			newstr[i] = s1[i];
			i++;
		}
	}
	while (j < _strlen(s2))
		{
			newstr[i] = s2[j];
			i++;
			j++;
		}
	}
	newstr[i] = '\0';
	return (newstr);
}
