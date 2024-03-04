#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring
 * @s: array to check
 * @accept: substring
 * Return: number of bytes in the initial segment of s which consist only of bytes from accept
 */ 
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int byte = 0;

	while (s[i] != ' ')
	{
		int j = 0;

		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				byte++;
			j++;
		}
		i++;
	}
	return (byte);
}
