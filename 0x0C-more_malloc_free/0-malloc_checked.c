#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: bytes
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *k;

	k = malloc(b);
	if (k == NULL)
		exit(98);
	return (k);
}
