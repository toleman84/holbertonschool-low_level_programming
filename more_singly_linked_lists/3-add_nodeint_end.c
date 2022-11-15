#include "lists.h"

/**
 * add_nodeint_end - Short description.
 * @head: first member.
 * @n: second member.
 *
 * Return: new_node.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *last_node;

	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		last_node = *head;

		while (last_node->next)
		{
			last_node = last_node->next;
		}
		last_node->next = new_node;
	}
	return (new_node);
}

