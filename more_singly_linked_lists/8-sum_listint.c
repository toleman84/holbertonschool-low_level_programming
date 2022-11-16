#include "lists.h"

/**
 * sum_listint - Short description.
 * @head: first member.
 *
 * Return: sum of data.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

