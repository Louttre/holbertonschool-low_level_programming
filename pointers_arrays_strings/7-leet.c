#include <stdio.h>
#include "main.h"
/**
 * leet - encrypt the string
 * @a: string to encrypt
 * Return: a
 */
char *leet(char *a)
{
	int i;
	char ref[20] = "A4a4E3e3O0o0T7t7L1l1";

	while (a[i] != '\0')
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
		i++;
	}
	return (a);
}
