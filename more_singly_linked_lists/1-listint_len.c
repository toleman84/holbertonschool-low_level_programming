#include "lists.h"

/**
 * listint_len - Short description.
 * @h: first element.
 *
 * Return: count.
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}

