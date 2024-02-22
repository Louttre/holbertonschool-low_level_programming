#include <stdio.h>

int main(void)
{
	int i;

	int j = 0;

	for(i = 3; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			j += i;
	}
	printf("%d\n", j);
	return (0);
}
