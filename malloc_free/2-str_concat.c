#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - point
 * @s1 :copy this string
 * @s2: with this
 *
 * Return: Always 1 (True) or 0 (False)
 */
char *str_concat(char *s1, char *s2)
{
	char *ret;
	int len_1 = 0;
	int len_2 = 0;
	int index = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len_1])
		len_1++;

	while (s2[len_2])
		len_2++;

	ret = malloc(sizeof(char) * (len_1 + len_2) + 1);

	if (ret == NULL)
		return (NULL);

	for (; index <= (len_1 + len_2); index++)
	{
		if (index < len_1)
			ret[index] = s1[index];
		else
			 ret[index] = s2[index - (len_1)];
	}

	return (ret);
}
