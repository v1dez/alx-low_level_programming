#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: starting address
 * @b: constant byte
 * @n: number of bytes to be filled with the constant b
 * Return: pointer s
 */

char *_memset(char *s, char b, unsigned int n)
{
	 int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
