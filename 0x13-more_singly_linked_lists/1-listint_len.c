#include "lists.h"

/**
 * listint_len - returns no of elements in a linked list
 * @h: head of a list
 * Return: numbers of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t no_nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		no_nodes++;
	}
	return (no_nodes);
}
