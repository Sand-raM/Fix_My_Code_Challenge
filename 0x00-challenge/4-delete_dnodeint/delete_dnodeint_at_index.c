#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node at a specific index from the list
 *
 * @head: Pointer to the first element of a list
 * @index: Index of the node to delete
 *
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *hd;
	dlistint_t *tmp;
	unsigned int c;

	if (*head == NULL)
	{
		return (-1);
	}
	hd = *head;
	c = 0;
	while (c < index && *head != NULL)
	{
		*head = (*head)->next;
		c++;
	}
	if (c != index)
	{
		*head = hd;
		return (-1);
	}
	if (index == 0)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
		if (tmp != NULL)
		{
			tmp->prev = NULL;
		}
	}
	else
	{
		(*head)->prev->prev = (*head)->prev;
		free(*head);
		if ((*head)->next)
			(*head)->next->prev = (*head)->prev;
		*head = hd;
	}
	return (1);
}
