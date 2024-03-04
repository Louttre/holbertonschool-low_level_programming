#include "main.h"
/**
 * _sqrt_support - find the square root of n
 * @n: int
 * @test: check number between test and n
 * Return: sqrt(n) or -1
 */
int _sqrt_support(int n, int test)
{
	if (test > n)
		return (-1);
	if (test * test == n)
		return (test);
	else
		return (_sqrt_support(n, test + 1));
}
/**
 * _sqrt_recursion - return square root of n
 * @n: sqrt(n*n)
 * Return: sqrt(n)
 */
int _sqrt_recursion(int n)
{
        return (_sqrt_support(n, 1));
}
