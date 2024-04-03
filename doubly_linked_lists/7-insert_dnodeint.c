#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - returns the sum of all the data of a list
 * @h: pointer to the pointer of the head of the list
 * @idx: index where it insert the new node
 * @n: data to store in the node
 * Return: pointer to the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h;
	dlistint_t *new;

	if (!idx)	
		return (add_dnodeint(h, n));
	for (; idx > 1; idx--)
	{
		temp = temp->next;
		if (!temp)
			return (NULL);
	}
	if (!temp->next)
		return (add_dnodeint_end(h, n));
	if (count < idx - 1)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->prev = temp;
	new->n = n;
	new->next = temp->next;
	temp->next = new;
	return (new);
}
