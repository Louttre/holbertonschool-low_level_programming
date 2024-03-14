#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - count number of case in array
 * @s: string to count
 * Return: i
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * comptword - count number of word in str
 * @str: string
 * Return: the number of word
 */
int comptword(char *str)
{
	int i = 0;
	int j = 0;
	int comptword = 0;

	for (; i < _strlen(str); i++)
	{
		if (str[j] != ' ' && str[j] != '\0')
			comptword += 1;
		while (str[j] != ' ' && str[j] != '\0')
			j++;
		while (str[j] == ' ')
			j++;
		i = j;
	}
	return (comptword);
}
/**
 * allp - allocate memory for each word
 * @p: array to stock pointers
 * @str: string
 * Return: the array with allocated memory
 */
char **allp(char **p, char *str)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int l = 0;
	int comptletter = 0;

	for (; i < _strlen(str); i++)
	{
		comptletter = 0;
		while (str[j] == ' ')
			j++;
		while (str[j] != ' ' && str[j] != '\0')
		{
			comptletter++;
			j++;
		}
		i = j;
		p[k] = malloc(sizeof(char) * (comptletter + 1));
		if (p[k] == NULL)
		{
			for (; l < comptword(str); l++)
				free(p[l]);
			free(p);
			return (NULL);
		}
		k++;
	}
	return (p);
}
/**
 * strtow - function that splits a string into words
 * @str: string to split
 * Return: pointer to the string
 */
char **strtow(char *str)
{
	int i = 0;
	int j = 0;
	int k = 0;
	char **p;

	p = malloc(sizeof(char *) * (comptword(str) + 1));
	if (p == NULL)
		return (NULL);
	allp(p, str);
	while (str[j] != '\0')
	{
		while (str[j] == ' ')
			j++;
		while (str[j] != ' ' && str[j] != '\0')
		{
			p[k][i] = str[j];
			i++;
			j++;
		}
		p[k][i] = '\0';
		i = 0;
		if (k < comptword(str))
			k++;
	}
	p[k] = NULL;
	return (p);
}
