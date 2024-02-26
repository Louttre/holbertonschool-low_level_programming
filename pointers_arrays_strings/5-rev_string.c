#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _strlen - count number of case in array
 * @s: string
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
 * print_rev - reverse a string
 * @s: string
 */
void rev_string(char *s)
{
	int i;
	char temp[100];
	int compteur = 0;

	for (i = _strlen(s) - 1; i >= 0; i--)
	{
		temp[compteur] = s[i];
		compteur++;
	}
	for (i = 0; i < _strlen(s); i++)
	{
		s[i] = temp[i];
	}	
}	
