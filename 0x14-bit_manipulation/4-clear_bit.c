#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0
 * at a given index
 * @n: pointer of an unsigned long int
 * @index: index
 * Return: 1 if success, -1 if fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int u;

	if (index > 63)
		return (-1);

	u = 1 << index;

	if (*n & u)
		*n ^= u;

	return (1);
}
