#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h;
	dlistint_t *new;
	unsigned int count = 1;
	
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	while (temp)
	{
		count++;
		temp = temp->next;
	}
	if (idx == 0)
		return (add_dnodeint(h, n));
	if (idx == count)
		return (add_dnodeint_end(h, n));
	temp = *h;
	count = 0;	
	while (temp && count < idx - 1)
	{
		temp = temp->next;
		count++;
	}
	if (count < idx - 1)
		return (NULL);
	new->prev = temp;
	new->n = n;
	new->next = temp->next;
	temp->next = new;
	return (new);		
}
