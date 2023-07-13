#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first pointer
 * @s2: second pointer
 * @n: number of bytes
 * Return: NULL (fail) or a pointer to newly
 * allocated space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *d;
	unsigned int j;
	int a;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	a = 0;
	while (s1[a] != '\0')
		a++;

	d = malloc(sizeof(char) * (a + n + 1));
	if (d == NULL)
		return (NULL);
	a = j = 0;
	while (s1[a] != '\0')
	{
		d[a] = s1[a];
		a++;
	}
	while (j < n && s2[j] != '\0')
	{
		d[a] = s2[j];
		a++, j++;
	}
	d[a] = '\0';
	return (d);
}
