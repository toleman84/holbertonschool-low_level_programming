#include "lists.h"

/**
 * free_dlistint - frees a double linked list.
 * @head: pointer to head list.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}

