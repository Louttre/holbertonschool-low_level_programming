#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *temp = head;

	if (!head)
		return (NULL);
	while (temp && count < index)
	{
		temp = temp->next;
		count++;
	}
	return (temp);
}
