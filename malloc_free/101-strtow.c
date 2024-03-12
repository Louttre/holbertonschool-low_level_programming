#include <stdio.h>
#include <stdlib.h>
#include <string.h>
unsigned int comptword(char *str)
{
	size_t i = 0;
        unsigned int j = 0;
	int comptword = 0;

	for (; i < strlen(str); i++)
        {
                        if (str[j] != ' ' && str[j] != '\0')
                        {
                                comptword += 1;
                        }
                        while (str[j] != ' ' && str[j] != '\0')
                        {       
                                j++; 
                        }
                        while (str[j] == ' ')
                                j++;
                        i = j;
        }
	return (comptword);
}
char **strtow(char *str)
{
	size_t i = 0;
	unsigned int j = 0;
	unsigned int k = 0;
	int comptletter = 0;
	char **p;
	
	p = malloc(sizeof(char*) * (comptword(str) + 1));
	for (; i < strlen(str); i++)
	{
		comptletter = 0;
		while (str[j] == ' ')
                {
                        j++;
                }
		while (str[j] != ' ' && str[j] != '\0')
                {
                        comptletter++;
                        j++;
                }
		i = j;
		p[k] = malloc(sizeof(char) * (comptletter + 1));
		k++;
	}
	i = 0, j = 0, k = 0;
	while (str[j] != '\0')
	{		
		while (str[j] == ' ')
		{
			j++;
		}

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
