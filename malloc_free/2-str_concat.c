#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - function function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to the array
 */
char *str_concat(char *s1, char *s2)
{
	size_t i = 0;
	size_t j = 0;
	char *newstr;
	
	if (s1 == NULL && s2 == NULL)
		return (NULL);
	newstr = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));
	if (newstr == NULL)
		return (NULL);
	if (s1 != NULL)
	{
		while (i < strlen(s1))
		{
			newstr[i] = s1[i];
			i++;
		}
	}
	if (s2 != NULL)
	{
		while (j < strlen(s2))
		{
			newstr[i] = s2[j];
			i++;
			j++;
		}
	}
	newstr[i] = '\0';
	return (newstr);
}
