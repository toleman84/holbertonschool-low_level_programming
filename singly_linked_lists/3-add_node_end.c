#include "lists.h"

/**
 * add_node_end - Short description.
 * @head: first member.
 * @str: second member.
 *
 * Return: new_node.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *last_node;

	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->len = strlen(str);
	new_node->str = strdup(str);

	if (*head ==  NULL)
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

