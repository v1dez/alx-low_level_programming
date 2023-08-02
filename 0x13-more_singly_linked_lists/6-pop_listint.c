#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node
 * @head: to pointer
 * Return: head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *snode;
	int n;

	if (head == NULL || *head == NULL)
		return (0);
	snode = *head;
	*head = snode->next;
	n = snode->n;
	free(snode);
	return (n);
}

