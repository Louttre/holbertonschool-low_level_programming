#include <stdio.h>

int main(void)
{
	long unsigned int i = 1;

	long unsigned int j = 2;

	long unsigned int k;
	
	int compteur = 0;

	printf("%lu, ", i);
	while (compteur < 49)
	{
		k = j;
		j += i;
		i = k;
		if (compteur == 48)
			printf("%lu\n", i);
		else
			printf("%lu, ", i);
		compteur++;
	}
	return (0);
}	
