#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - count number of case in array
 * @s: string to count
 * Return: i
 */
unsigned int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * string_nconcat - function that concatenates two strings
 * @s1: string
 * @s2: string 2
 * @n: n byte
 * Return: a
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0;
	unsigned int j = 0;
	char *a;

	a = malloc(sizeof(char) * (_strlen(s1) + _strlen(s2) + 1));
	if (a == NULL)
		return (NULL);

	for (; i < _strlen(s1); i++)
	{
		a[i] = s1[i];
	}
	if (n > _strlen(s2))
		n = _strlen(s2);
	for (; j < n; j++)
	{
		a[i] = s2[j];
		i++;
	}
	a[i] = '\0';
	return (a);
}
