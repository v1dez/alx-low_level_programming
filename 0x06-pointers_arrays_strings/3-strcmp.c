#include "main.h"

/**
 * _strcmp - Compare two strings
 * @s1: string 1
 * @s2: string 2
 * Return: 0
 */

int _strcmp(char *s1, char *s2)
{
	int k;

	for (k = 0; s1[k] != '\0' || s2[k] != '\0'; k++)
	{
		if (s1[k] != s2[k])
			return (s1[k] - s2[k]);
	}
	return (0);
}
