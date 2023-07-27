#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * _strlen - returns the length of a string
 * @s : character
 * Return: value k
 */
int _strlen(const char *s)
{
	int k = 0;

	while (s[k] != '\0')
	{
		k++;
	}
	return (k);
}

/**
 * add_node - add a new node at beginning of a list_t list
 * @head: pointer to the head of the list_t list
 * @str: string to be added to the list_t list
 * Return: the number of nodes if fails NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *add;

	add = malloc(sizeof(list_t));
	if (add == NULL)
		return (NULL);
	add->str = strdup(str);

	add->len = _strlen(str);
	add->next = *head;
	*head = add;

	return (add);
}
