#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *str_concat(char *s1, char *s2)
{
	size_t i = 0;
	size_t j = 0;
	char *newstr;
	
	newstr = malloc (sizeof(char) * (strlen(s1) + strlen(s2) + 1));
	while (i < strlen(s1))
	{
		newstr[i] = s1[i];
		i++;
	}
	while (j <= strlen(s2))
	{
		newstr[i] = s2[j];
		i++;
		j++;
	}
	return (newstr);
}
