#include <stdio.h>
/**
 * main - print argc - 1
 * @argc: number of command line
 * @argv: array of argc lenght
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
