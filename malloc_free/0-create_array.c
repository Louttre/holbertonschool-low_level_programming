#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * create_array - function that creates an array of chars
 * @size: size of the array
 * @c: char to unitialize the array
 * Return: pointer to the array or NULL
 */
char *create_array(unsigned int size, char c)
{
	size_t i = 0;
	char *ch;

	if (size == 0)
		return (NULL);
	ch = malloc(sizeof(char) * (size + 1));
	if (ch == NULL)
		return (NULL);
	while (i < size)
	{
		ch[i] = c;
		i++;
	}
	ch[size] = '\0';
	return (ch);
}
