#include "lists.h"

/**
 * sum_dlistint - Sums al the data.
 * @head: Head of the double list
 *
 * Return: sum of data.
 */

int sum_dlistint(dlistint_t *head)
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

