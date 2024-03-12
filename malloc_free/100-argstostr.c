#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int lenofav (char **str)
{
	int i = 0;
	int j = 0;
	int compt = 0;

	while (str[i] != NULL)
	{
		while (str[i][j] != '\0')
		{
			compt++;
			j++;
		}
		j = 0;
		i++;
	}
	return (compt);
}
char *argstostr(int ac, char **av)
{
	unsigned int i = 0;
	int j = 0;
	int k = 0;
	char *p;
	
	if (ac == 0 || av == NULL)
		return (NULL);
	p = malloc(sizeof(char) * (lenofav(av) + ac + 1));
	for (; j < ac; j++)
	{
		while (av[j][i] != '\0')
		{
			p[k] = av[j][i];
			i++;
			k++;
		}
		p[k] = '\n';
		k++;
		i = 0;
	}
	p[k] = '\0';
	return (p);
}
