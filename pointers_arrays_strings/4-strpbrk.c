#include "main.h"
/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: string
 * @accept: string
 * Return: pointer to the byte in s, matches one of the bytes in accept
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i = 0;
	char *p = '\0';

	while (s[i] != '\0')
	{
		unsigned int j = 0;

		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				p = &s[i];
				return (p);
			}
			j++;
		}
		i++;
	}
	return (p);
}
