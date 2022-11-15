#include "lists.h"

/**
 * pop_listint - Short description.
 * @head: fisrt member.
 *
 * Return: data.
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	temp = *head;
	data = temp->n;
	*head = temp->next;
	free(temp);

	return (data);
}

