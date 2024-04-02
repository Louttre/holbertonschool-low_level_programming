#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp = head;
	
	if (!head)
		return (0);
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
