#include "main.h"

/**
 * leet - encodes a string in 1337
 * @s: string
 * Return: s
 */
char *leet(char *s)
{
	int m;
	int n;
	char *a = "aAeEoOtTlL";
	char *b = "4433007711";

	for (m = 0; s[m] != '\0'; m++)
	{
		for (n = 0; n < 10; n++)
		{
			if (s[m] == a[n])
			{
				s[m] = b[n];
			}
		}
	}

	return (s);
}
