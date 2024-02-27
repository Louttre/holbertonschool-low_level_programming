#include "main.h"
#include <stdio.h>
#include <string.h>
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
 * _atoi - convert char to int
 * @s: string to convert
 * Return: temp
 */
int _atoi(char *s)
{
	int cpos = 0;
	int cneg = 0;
	int i;
	int temp = 0;

	for (i = 0; i < _strlen(s); i++)
	{
		if (s[i] == '-' && cpos == 0)
	       		cneg = 1;
 		else if (s[i] == '+' && cneg == 0)
			cpos += 1;
		if (s[i] <= '9' && s[i] >= '0')	
		{
			while (s[i] <= '9' && s[i] >= '0')
			{	
				temp = (temp * 10) + (s[i] - 48);
				i++;
			}
			break;
		}
	}
	if (cneg == 1)
		temp *= -1;
	return (temp);
}
