#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns then number of elements in a list
 * @h: name of the list
 * Return: the number of nodes in h
 */
size_t list_len(const list_t *h)
{
	int num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
