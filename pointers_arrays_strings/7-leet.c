#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * leet - encrypt the string
 * @a: string to encrypt
 * Return: a
 */
char *leet(char *a)
{
	size_t i;
	char ref[20] = "A4a4E3e3O0o0T7t7L1l1";

	for (i = 0; i < strlen(a); i++)
	{
		int j = 0;

		for (; j < 20; j++)
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
