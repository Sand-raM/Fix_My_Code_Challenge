#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - Prints a doubly linkedlist of intergers
 *
 * @h: pointer to the first element of the list
 *
 * Return: number of the element printed
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t x

	x = 0;
	while (h)
	{
		printf("%d\x", h->x);
		h = h->next;
		x++;
	}
	return (x);
}
