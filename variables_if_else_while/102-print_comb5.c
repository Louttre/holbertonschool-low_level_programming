#include <stdio.h>

int main(void)
{
	for(int i = 0; i < 100; i++)
	{
		for (int j = i + 1; j < 100; j++)
		{		
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar(' ');
			putchar((j / 10) + '0');
			putchar((j % 10) + '0');
			if (j == 99 && i == 98) 
				putchar('\n');
			else
			{	
				putchar(',');
				putchar(' ');
	
			}
		}
	}
	return (0);
}	
