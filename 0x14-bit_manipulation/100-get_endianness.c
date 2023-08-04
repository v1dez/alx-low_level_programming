#include "main.h"

/**
 * get_endianness - checks endianness
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int k;
	char *c;

	k = 1;
	c = (char *)&k;

	return (*c);
}
