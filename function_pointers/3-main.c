#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>
/**
 * main - program that performs simple operations
 * @argc: contain 2 int and a sign operator
 * @argv: array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int calcul;

	if (argc != 4 || argv[2][1])
	{
		printf("Error\n");
		exit(98);
	}
	printf("%d\n", get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));
	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if (argv[3][0] == '0' && (argv[2][0] == '%' || argv[2][0] == '/'))
	{
		printf("Error\n");
		exit(100);
	}
	calcul = (get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));
	printf("%d\n", calcul);
	return (0);
}
