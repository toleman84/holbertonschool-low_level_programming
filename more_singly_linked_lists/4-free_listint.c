#include "lists.h"

/**
 * free_listint - Short description.
 * @head: first member.
 *
 * Return: free.
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	free(head);
}

