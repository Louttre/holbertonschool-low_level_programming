#include <stdio.h>
/**
 * main - Prints the first 98 Fibonacci numbers
 * Return: Always 0
 */
int main(void)
{
	long int i = 1;
	long int j = 2;
	long int k;
	int compteur;

	printf("%lu, %lu", i, j);

	for (compteur = 2; compteur < 99; compteur++)
	{
		k = i + j;
		i = j;
		j = k;

		if (k >= 10000000000)
		{
			printf(", %lu%010lu", k / 10000000000, k % 10000000000);
		}
		else 
		{
			printf(", %lu", k);
		}
	}
	printf("\n");
	return (0);
}
