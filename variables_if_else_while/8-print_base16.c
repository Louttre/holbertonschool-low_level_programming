#include <stdio.h>
/**
 * main - compte en base 10
 * Return: 0
 */
int main(void)
{
	int i = 48;

	int j = 97;

	while (i < 58)
	{
		putchar(i);
		i++;
	}
	while (j < 103)
	{
		putchar(j);
		j++;
	}
	putchar('\n');
	return (0);
}
