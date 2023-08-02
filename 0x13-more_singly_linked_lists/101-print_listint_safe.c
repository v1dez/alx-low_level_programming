#include "lists.h"

/**
 * free_listp - frees a linked list
 * @head: head of a list
 * Return: no return
 */
void free_listp(listp_t **head)
{
	listp_t *temp;
	listp_t *c;

	if (head != NULL)
	{
		c = *head;
		while ((temp = c) != NULL)
		{
			c = c->next;
			free(temp);
		}
		*head = NULL;
	}
}

/**
 * print_listint_safe - prints a linked list
 * @head: head of a list
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t n_nodes = 0;
	listp_t *ptr, *n_new, *add;

	ptr = NULL;
	while (head != NULL)
	{
		n_new = malloc(sizeof(listp_t));

		if (n_new == NULL)
			exit(98);

		n_new->p = (void *)head;
		n_new->next = ptr;
		ptr = n_new;

		add = ptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&ptr);
				return (n_nodes);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		n_nodes++;
	}

	free_listp(&ptr);
	return (n_nodes);
}
