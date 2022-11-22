#include "lists.h"

/**
 * print_dlistint - Print all elements
 * @h: head of the dlistint list.
 *
 * Return: numbers of nodes.
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}

