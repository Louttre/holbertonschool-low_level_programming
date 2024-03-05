#include <stdio.h>
/**
 * main - print all arguments it receives
 * @argc: number of command line
 * @argv: array of argc lenght
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
