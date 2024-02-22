#include <stdio.h>
/**
 * main - sum multiple of 3 and 5
 * Return: 0
 */
int main(void)
{
	int i;

	int j = 0;

	for (i = 3; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			j += i;
	}
	printf("%d\n", j);
	return (0);
}
