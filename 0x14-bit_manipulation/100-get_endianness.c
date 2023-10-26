#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: 0 if big, 1 if little
 */
int get_endianness(void)
{
	unsigned int f;
	char *k;

	f = 1;
	k = (char *) &f;

	return ((int)*k);
}
