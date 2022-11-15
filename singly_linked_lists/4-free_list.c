#include "lists.h"

/**
 * free_list - Short description.
 * @head: first member.
 *
 * Return: Always
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
	free(head);
}

