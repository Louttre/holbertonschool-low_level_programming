#include <stdio.h>
/**
 * main - 98 first fibo number
 * Return: 0
 */
int main(void)
{
	long int i = 1;

	long int j = 2;

	long int k;
	int compteur = 0;

	printf("%lu, ", i);
	while (compteur < 98)
	{
		k = j;
		j += i;
		i = k;
		if (compteur == 97)
			printf("%lu\n", i);
		else
			printf("%lu, ", i);
		compteur++;
	}

	return (0);
}
