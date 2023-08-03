#include "main.h"

/**
 * binary_to_uint -converts a binary number to an unsigned int
 * @b: pointing binary
 * Return: converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int k;
	unsigned int m = 0;

	if (!b)
		return (0);
	for (k = 0; b[k] != '\0'; k++)
	{
		if (b[k] != '0' && b[k] != '1')
			return (0);
	}
	for (k = 0; b[k] != '\0'; k++)
	{
		m <<= 1;
		if (b[k] == '1')
			m += 1;
	}
	return (m);
}
