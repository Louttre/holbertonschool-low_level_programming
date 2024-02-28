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
 * _strcmp - compare two string
 * @s1: first string
 * @s2: string to compare
 * Return: 0 if equal or the diff of two diff char
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; i <= _strlen(s1); i++)
	{
		if (s1[i] < s2[i] || s1[i] > s2[i])
			return (s1[i]-s2[i]);
	}
	return (0);
}
