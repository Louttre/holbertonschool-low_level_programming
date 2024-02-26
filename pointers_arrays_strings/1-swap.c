#include <stdio.h>
#include "main.h"
/**
 * swap_int - swap to int
 * @a: become b
 * @b: becoma a
 */
void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
