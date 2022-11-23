#include "lists.h"

/**
 * get_dnodeint_at_index - Get node.
 * @head: Pointer to head.
 * @index: Given index.
 *
 * Return: Always.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (head)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}

