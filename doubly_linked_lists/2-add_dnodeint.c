#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
/**
 * add_node_end - function that adds a new node at the start of a list
 * @h: pointer to the head of the list
 * @n: int
 * Return: pointer to the head of the list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (!head)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	new->prev = NULL;
	*head = new;
	return (new);
}
