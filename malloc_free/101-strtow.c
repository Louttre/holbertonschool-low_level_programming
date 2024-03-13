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
char **strtow(char *str)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int l = 0;
	int comptletter = 0;
	char **p;
	
	p = malloc(sizeof(char*) * (comptword(str) + 1));
	if (p == NULL)
		return (NULL);
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
	i = 0, j = 0, k = 0;
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
	return (p);
}
