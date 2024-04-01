#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	if (!h)
		return (0);
	while(h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
