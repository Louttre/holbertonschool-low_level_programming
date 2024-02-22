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

	float m, p;

	int compteur = 0;
	
	
	long int l = 10000000000;
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
			p = m * 10;
			if (((int)p % 10) == 0)
				printf("%lu%lu, ", o * 10, n);
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
