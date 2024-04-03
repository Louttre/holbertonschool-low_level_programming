#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * add_dnodeint - function that adds a new node at the start of a list
 * @head: pointer to the head of the list
 * @n: int
 * Return: pointer to the head of the list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new || !head)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->prev = NULL;
	if (*head != NULL)
	{
        	(*head)->prev = new;
		new->next = *head;
	}
	*head = new;
	return (new);
}
