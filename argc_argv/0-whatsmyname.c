#include <stdio.h>
/**
 * main - print program name (argv[0])
 * @argc: number of command line
 * @argv: array of argc lenght
 * Return: 0 
 */
int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
