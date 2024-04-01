#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while(h != NULL)
	{
		if (h->n)
			printf("%d\n", h->n);
		else
			printf("0\n");
		h = h->next;
		count++;
	}
	return (count);
}
