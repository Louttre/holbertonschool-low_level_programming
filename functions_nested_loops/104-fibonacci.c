#include <stdio.h>
/**
 * main - 98 first fibo number
 * Return: 0
 */
int main(void)
{
	long int i = 1;

	long int j = 2;

	long int k, m, n;
	int compteur = 0;
	
	long int l = 1000000000;
	printf("%lu, ", i);
	while (compteur < 98)
	{
		k = j;
		j += i;
		i = k;
		if ((i + j) > l)
		{	
			m = (i + j) / l;
			n = (i + j) % l;
			if (compteur != 97)
				printf("%lu%lu, ", m, n);
			else
				printf("%lu%lu\n", m, n);		
		}
		else
			printf("%lu, ", i);
		compteur++;
	}
	return (0);
}
