#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @size: bytes each and returns a pointer
 * @nmemb: allocate memory for array
 * @size: allocate element of size bytes
 * Return: pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *b;
	unsigned int k;

	if (nmemb == 0 || size == 0)
		return (NULL);
	b = malloc(nmemb * size);
	if (b == NULL)
		return (NULL);
	for (k = 0; k < (nmemb * size); k++)
		b[k] = 0;
	return (b);
}
