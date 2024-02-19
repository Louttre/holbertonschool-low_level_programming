#include <stdio.h>
/**
 * main - compte en base 10
 * Return: 0
 */
int main(void)
{
	int i = 48;

	while (i < 58)
	{
		putchar(i);
		putchar(44);
		putchar(32);
		i++;
	}
	putchar('\n');
	return (0);
}
