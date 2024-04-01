#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if(!head)
	{
		free(head);
		return;
	}
	if (!head->next)
	{
		free(head);
		return;
	}
	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	free(head);
}
