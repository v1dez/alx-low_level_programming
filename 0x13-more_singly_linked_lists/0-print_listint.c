#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: head of list
 * Return: number of nodes
 *
 */
size_t print_listint(const listint_t *h)
{
	size_t no_nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		no_nodes++;
	}
	return (no_nodes);
}
