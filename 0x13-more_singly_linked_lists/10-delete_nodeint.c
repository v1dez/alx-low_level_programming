#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a linked list
 * @head: head of a list
 * @index: index of the list where the node is deleted
 * Return: 1 if it succeeded, -1 if fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp;
	listint_t *next;

	temp = *head;

	if (index != 0)
	{
		for (i = 0; i < index - 1 && temp != NULL; i++)
		{
			temp = temp->next;
		}
	}

	if (temp == NULL || (temp->next == NULL && index != 0))
	{
		return (-1);
	}

	next = temp->next;

	if (index != 0)
	{
		temp->next = next->next;
		free(next);
	}
	else
	{
		free(temp);
		*head = next;
	}

	return (1);
}
