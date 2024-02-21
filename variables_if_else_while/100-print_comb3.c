#include <stdio.h>
/**
 * main - 00 to 99 w/o rep
 * Return: 0
 */
int main(void)
{
	int i = 48;

	while (i < 57)
	{
		int j = 48;

		while (j < 58)
		{
			while (j <= i)
			{
				j++;
			}
			putchar(i);
			putchar(j);
			if (i < 56)
			{
			putchar(',');
			putchar(' ');
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
