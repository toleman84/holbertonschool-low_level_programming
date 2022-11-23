#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a ew node and given position.
 * @h: Pointer to the head.
 * @idx: Position to insert the new node.
 * @n: Integer for the new node to contain.
 *
 * Return: Adress of the new node, otherwise if fail - NULL.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h;
	unsigned int node;

	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = temp;
		*h = new_node;

		return (new_node);
	}

	for (node = 0; node < (idx - 1); node++)
	{
		if (temp == NULL || temp->next == NULL)
			return (NULL);

		temp = temp->next;
	}
	new_node->prev = temp;
	new_node->next = temp->next;
	temp->next->prev = new_node;
	temp->next = new_node;

	return (new_node);
}

