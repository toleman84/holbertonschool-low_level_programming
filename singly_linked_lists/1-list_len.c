#include "lists.h"

/**
 * list_len - Short description.
 * @h: first member.
 *
 * Return: numbers of elements
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}

