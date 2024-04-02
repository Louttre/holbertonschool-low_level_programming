#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	dlistint_t *temp1 = *head;
	dlistint_t *temp2 = *head;
	unsigned int count = 0;

	if (!*head)
		return (-1);
	if (index == 0)
	{
		temp = temp->next;
		free(*head);
		*head = temp;
		return (1);
	}
	while (temp && count < index)
	{
		temp = temp->next;
		count++;
	}
	if (count < index)
		return (-1);
	temp2 = temp->prev;
	temp1 = temp->next;
	temp2->next = temp1;
	temp1->prev = temp2;
	free(temp);
	return (1);
}
