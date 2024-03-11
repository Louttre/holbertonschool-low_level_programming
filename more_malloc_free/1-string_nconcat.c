#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t i = 0;
	unsigned int j = 0;
	char *a;

	a = malloc(sizeof(char) * (strlen(s1) + strlen(s2)));

	for (; i < strlen(s1); i++)
	{
		a[i] = s1[i];
	}
	if (n > strlen(s2))
		n = strlen(s2); 
	for (; j < n; j++)
	{
		a[i] = s2[j];
		i++;
	}
	return (a);
}
