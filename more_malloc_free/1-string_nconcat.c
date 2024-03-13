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

	if (s == NULL)
		return (0);
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
	unsigned int len2 = _strlen(s2);
	unsigned int len1 = _strlen(s1);

	if (n > INT_MAX) {
                return NULL;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n > len2)
		n = len2;
	a = malloc(sizeof(char) * (len1 + n + 1));
	if (a == NULL)
		return (NULL);
	for (; i < len1; i++)
		a[i] = s1[i];
	for (; j < n; j++, i++)
		a[i] = s2[j];
	a[i] = '\0';
	return (a);
}
