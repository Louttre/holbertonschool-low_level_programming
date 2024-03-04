#include "main.h"
/**
 * _strstr - function that searches a string for any of a set of bytes
 * @haystack: string
 * @needle: string
 * Return: pointer to the byte in s, matches one of the bytes in accept
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0;
	char *p = '\0';

	while (haystack[i] != '\0')
	{
		unsigned int j = 0;

		while (needle[j] != '\0')
		{
			if (haystack[i] == needle[0])
			{
				p = &haystack[i];

				while (haystack[i] == needle[j])
				{
					i++;
					j++;
				}
			}
			if (needle[j] == '\0')
				return (p);
			j++;
		}
		i++;
	}
	return (p);
}
