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
 * leet - encrypt the string
 * @a: string to encrypt
 * Return: a
 */
char *leet(char *a)
{
	int i;
	char ref[20] = "A4a4E3e3O0o0T7t7L1l1";

	for (i = 0; i < _strlen(a); i++)
	{
		int j = 0;

		for (; j < _strlen(ref); j++)
		{
			if (a[i] == ref[j])
			{
				a[i] = ref[j + 1];
				break;
			}
		}
	}
	return (a);
}
