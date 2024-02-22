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
	while (compteur < 49)
	{
		k = j;
		j += i;
		i = k;
		if (compteur == 48)
			printf("%lu\n", i);
		else
			printf("%lu, ", i);
		compteur++;
	}
	return (0);
}
