#include <stdio.h>
#include "main.h"

void print_times_table(int n)
{
	int i = 0;
	
	for (; i < n + 1; i++)
	{
		int j = 1;

		printf("0,");

		for (; j < n + 1; j++)
		{	
			int k = j * i;

			if (k < 10)
				printf("   %d", k);
			else if (k < 100 && k > 9)
				printf("  %d", k);
			else if (k < 1000 && k > 99)
				printf(" %d", k);
			else
				printf("%d", k);
			if (j == n)
				printf("\n");
			else
				printf(",");
		}
	}
}	
