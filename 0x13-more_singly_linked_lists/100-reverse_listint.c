#include "lists.h"

/**
 * reverse_listint -  reverses a listint_t linked list
 * @head: pointer to head of the list_t list
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *k, *n;

	if (!head || !*head)
		return (NULL);

	n = NULL;

	while ((*head)->next != NULL)
	{
		k = (*head)->next;
		(*head)->next = n;
		n = *head;
		*head = k;
	}
	(*head)->next = n;

	return (*head);
}
