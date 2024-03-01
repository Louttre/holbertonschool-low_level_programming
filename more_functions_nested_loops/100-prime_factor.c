#include <stdio.h>
#include <math.h>
/**
 * isitprime - check if n is prime
 * @n: number
 * Return: 1 if prime else 0
 */
int isitprime(long int n)
{
	long int i = 3;
	
	if (n % 2 == 0)
		return (0);
	for (; i <= sqrt(n); i++)
	{
		if (n % i == 0)
			return (0);
	}
	return (1);
}
/**
 * main - find largest prime factor of a number
 * Return: res
 */
int main(void)
{
	long int n = 612852475143;
	long int i = 2;
	long int res;

	while (i <= n)
	{
		if (n % i != 0)
			i++;
		else
		{
			n /= i;
			res = i;
		}
	}
	printf("%ld\n", res);
	return (0);
}
