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
	unsigned int count = 0;

	new = malloc(sizeof(dlistint_t));
	if (!*h)
		return (NULL);
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
	while (temp && count < idx)
	{
		temp = temp->next;
		count++;
	}
	if (count < idx)
		return (NULL);
	new->prev = temp->prev;
	new->n = n;
	new->next = temp;
	temp->prev = new;
	return (new);
}
