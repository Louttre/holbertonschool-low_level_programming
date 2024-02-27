#include "main.h"
#include <stdio.h>
#include <string.h>

int _atoi(char *s)
{
	int cpos = 0;
	int cneg = 0;
	int i;
	int temp = 0;

	for (i = 0; i < _strlen(s); i++)
	{
		if (s[i] == '-')
	       		cneg += 1;
 		else if (s[i] == '+')
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
	if (cneg > cpos)
		temp *= -1;
	return (temp);
}
