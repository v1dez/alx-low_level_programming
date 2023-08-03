#include "main.h"

/**
 * clear_bit - sets the value of a bit to
 * @n: pointe
 * @index: index
 * Return: 1 Sucess, -1fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);

	m = 1 << index;

	if (*n & m)
		*n ^= m;

	return (1);
}
