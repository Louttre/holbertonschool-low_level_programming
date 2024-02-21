#include <stdio.h>
/**
 * main - 00 to 99 w/o rep
 * Return: 0
 */
int main(void)
{
	int k = 48;

	while (k < 56)
	{
		int i = 48;

		while (i < 57)
		{
			int j = 48;
			
			while (i <= k)
			{
				i++;
			}
			while (j < 58)
			{
				while (j <= i)
				{
					j++;
				}
				putchar(k);
				putchar(i);
				putchar(j);
				if (k < 55)
				{	
					putchar(',');
				
				}	putchar(' ');
				j++;
			}
			i++;
		}
		k++;
	}	
	putchar('\n');
	return (0);
}
