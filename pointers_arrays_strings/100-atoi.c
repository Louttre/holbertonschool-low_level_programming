#include "main.h"
#include <stdio.h>
#include <string.h>
#include <limits.h>
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
	int cneg = 0;
	int i;
	int temp = 0;

	for (i = 0; i < _strlen(s); i++)
	{
		if (s[i] == '-')
			cneg += 1;
		if (s[i] <= '9' && s[i] >= '0')
		{
			while (s[i] <= '9' && s[i] >= '0')
			{
				if (temp == INT_MAX / 10 && (s[i] - 48) > INT_MAX % 10)
				{
					temp = INT_MAX;
					break;
				}
				temp = (temp * 10) + (s[i] - 48);
				i++;
			}
			break;
		}
	}
	if (cneg % 2 == 1 && temp == INT_MAX)
	{
		return (INT_MIN);
	}	
	if (cneg % 2 == 1)
		temp *= -1;
	return (temp);
}
