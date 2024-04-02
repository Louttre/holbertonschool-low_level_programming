#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
/**
 * convert_binary - convert int to binary
 * @num: int to convert
 * Return: string that correspond to the binary of num
 */
char *convert_binary(unsigned long int num)
{
	unsigned int i = 0;
	char *s;
	int lennum;

	lennum = num;
	while (lennum > 0)
	{
		lennum /= 2;
		i++;
	}
	s = malloc(sizeof(char) * (i + 1));
	s[i] = '\0';
	if (s == NULL)
		return (NULL);
	while (i > 0)
	{
		s[i - 1] = num % 2 + '0';
		num /= 2;
		i--;
	}
	return (s);
}
/**
 * _binary - convert int to binary
 * @args: list of arguments
 * @count: number of character
 * Return: count + number of digit of the integer
 */
void print_binary(unsigned long int n)
{
	char *s;
	

	if (n == 0)
		write(1, "0", 1);
	s = convert_binary(n);
	write(1, s, strlen(s));
}
