#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * create_array - function that creates an array of chars
 * @size: size of the array
 * @c: char to unitialize the array
 * Return: pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	size_t i = 0;
	char *ch;
	
	if (size == 0)
		return NULL;
	ch = (char *)malloc(sizeof(char) * (size + 1));
	while (i <= size)
	{
		ch[i] = c;
		i++;
	}
	return (ch);
}
