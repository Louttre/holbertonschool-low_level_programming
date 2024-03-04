#include "main.h"
/**
 * _memcpy - function that copies memory area
 * @dest: destination array
 * @src: source array
 * @n: number of byte to copy
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
