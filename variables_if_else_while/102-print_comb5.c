#include <stdio.h>
/**
 * main - compteur
 * Return: 0
 */
int main(void)
{
	int i = 0;

	for (; i < 100; i++)
	{
		int j = i + 1;

		for (; j < 100; j++)
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar(' ');
			putchar((j / 10) + '0');
			putchar((j % 10) + '0');
			if (j == 99 && i == 98)
				putchar('\n');
			else
			{
				putchar(',');
				putchar(' ');

			}
		}
	}
	return (0);
}
