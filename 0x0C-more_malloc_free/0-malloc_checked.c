#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: bytes
 * Return: pointer to the allocated memory
 * if malloc termination with a status value of 98
 */
void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
