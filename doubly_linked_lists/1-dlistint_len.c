#include "lists.h"

/**
 * dlistint_len - Print all elements.
 * @h: head of the dlistint list.
 *
 * Return: numbers of nodes.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}

