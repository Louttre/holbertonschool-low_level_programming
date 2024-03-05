#include "main.h"
/**
 * prime_support - check if n is prime
 * @n: int to check primary property
 * @max: max number to test
 * @test: min to test
 * Return: 0 false - 1 true
 */
int prime_support(int n, int max, int test)
{
	if (test > max)
		return (1);
	if (n % test == 0)
		return (0);
	else
		return (prime_support(n, n / 2, test + 1));
}
/**
 * is_prime_number - return prime_support
 * @n: int to check
 * @Return: 0 or 1
 */
int is_prime_number(int n)
{
	if (n < 0 || n == 1 || n == 0)
		return (0);
	else if (n == 2)
		return (1);
	return (prime_support(n, n / 2, 3));
}
