#include <stdio.h>

int main(void)
{
	int i = 1;

	int j = 2;

	int k;
	
	printf("%d, ", i);
	while (j < 50)
	{
		k = j;
		j += i;
		i = k;
		if (j > 50)
			printf("%d\n", i);
		else
			printf("%d, ", i);
	}
	return (0);
}	
