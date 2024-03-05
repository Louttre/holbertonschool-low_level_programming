#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - add all arg in argv if it can
 * @argc: number of command line
 * @argv: array of argc lenght
 * Return: 0, 1 if != digit
 */
int main(int argc, char *argv[])
{
	int i = 1, res = 0;
	size_t j;
	char *car;

	if (argc < 1)
	{
		return (0);
	}
	for (; i < argc; i++)
	{
		car = argv[i];
		j = 0;
		while (j < strlen(car))
		{
			if (car[j] < '0' || car[j] > '9')
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		res += atoi(argv[i]);
	}
	printf("%d\n", res);
	return (0);
}
