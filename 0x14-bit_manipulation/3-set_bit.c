#include "main.h"

/**
 * set_bit - sets the value of a bit to 1
 * @n: pointer
 * @index: index of the bit
 * Return: 1 Success, -1 fail
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int k;

	if (index > 63)
		return (-1);

	k = 1 << index;
	*n = (*n | k);

	return (1);
}
