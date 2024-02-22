#include <stdio.h>
/**
 * main - 98 first fibo number
 * Return: 0
 */
int main(void)
{
	long int i = 1;

	long int j = 2;

	long int k, n;

	float m;

	int compteur = 0;
	
	
	long int l = 100000000000;
	printf("%lu, ", i);
	while (compteur < 98)
	{
		long int o;

		k = j;
		j += i;
		i = k;

		if (i > l)
		{	
			m = i / l;
			n = i % l;
			o = (int)m;
			if (compteur != 97)
				printf("%lu%lu, ", o, n);
			else
				printf("%lu%lu\n", o, n);		
		}
		else
			printf("%lu, ", i);
		compteur++;
	}
	return (0);
}
