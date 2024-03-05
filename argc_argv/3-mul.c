#include <stdio.h>
#include <stdlib.h> 
/**
 * main - multiply all arg in argv
 * @argc: number of command line
 * @argv: array of argc lenght
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 1, res = 1;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	for (; i < argc; i++)
	{
		res *= atoi(argv[i]);
	}
	printf("%d\n", res);
	return (0);
}
