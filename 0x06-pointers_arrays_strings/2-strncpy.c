#include "main.h"

/**
 *_strncpy -function that copies a string
 * @src: source of strings
 * @dest: destination of string
 * @n: length of int
 * Return: pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int k;

	for (k = 0; k < n && *(src + k); k++)
	{
		*(dest + k) = *(src + k);
	}
	for (; k < n; k++)
	{
	*(dest + k) = '\0';
	}
	return (dest);

}
