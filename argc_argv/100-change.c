#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints minimum number of coins to make change on money
 * @argc: change
 * @argv: pointer
 * Return: 0 if neg, 1 if too many arg
 */
int main(int  argc, char *argv[])
{
	int comptsus = 0;
	int cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	while (cents - 25 >= 0)
	{
		cents -= 25;
		comptsus++;
	}
	while (cents - 10 >= 0)
	{
		cents -= 10;
		comptsus++;
	}
	while (cents - 2 >= 0)
	{
		cents -= 2;
		comptsus++;
	}
	while (cents - 1 >= 0)
	{
		cents -= 1;
		comptsus++;
	}
	printf("%d\n", comptsus);
	return (0);
}
