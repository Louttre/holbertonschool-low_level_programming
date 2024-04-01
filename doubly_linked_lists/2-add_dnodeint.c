#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (!new->n)
	{
		free(new);
		return (NULL);
	}
	new->next = *head;
	new->prev = NULL;
	*head = new;
	return (new);
}
