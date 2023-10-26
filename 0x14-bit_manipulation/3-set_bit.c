#include "main.h"

/**
 * set_bit - sets the value of a bit to 1
 * at a given index
 * @n: pointer of unsigned long int
 * @index: index
 * Return: 1 success, -1 fail
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int u;

	if (index > 63)
		return (-1);

	u = 1 << index;
	*n = (*n | u);

	return (1);
}
