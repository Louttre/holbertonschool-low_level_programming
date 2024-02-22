#include <stdio.h>
/**
 * main - fibo 4 000 000
 * Return: 0
 */
int main (void)
{
	unsigned long int i = 1;

	unsigned long int j = 2;

	unsigned long int k;

       	unsigned long int compteur = 0;
	while (j < 4000000)
	{
		if (j % 2 == 0)
			compteur += j;
		k = j;
		j += i;
		i = k;
		if (j >= 4000000)
			printf("%lu\n", compteur);
	}
	return (0);
}
