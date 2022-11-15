#include "lists.h"

/**
 * add_nodeint - Short description.
 * @head: first member.
 * @n: second member.
 *
 * Return: new_node.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}

