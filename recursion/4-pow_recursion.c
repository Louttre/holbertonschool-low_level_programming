#include "main.h"
/**
 * _pow_recursion - x pow y
 * @x: int
 * @y: pow
 * Return: x pow y or -1 if y < 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y != 0)
		return (x * _pow_recursion(x, y - 1));
	else
		return (1);
}
