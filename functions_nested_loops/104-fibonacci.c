#include <stdio.h>
/**
 * main - 50 first fibo number
 * Return: 0
 */
int main(void)
{
	unsigned long int i = 1;

	unsigned long int j = 2;

	unsigned long int k;
	int compteur = 0;

	printf("%lu, ", i);
	while (compteur < 99)
	{
		k = j;
		j += i;
		i = k;
		if (compteur == 97)
			printf("%lu", i);
		else
			printf("%lu\n, ", i);
		compteur++;
	}
	return (0);
}
