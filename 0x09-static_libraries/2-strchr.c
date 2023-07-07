#include "main.h"

/**
 * _strchr - locate character
 * @s: character
 * @c: character
 * Return: pointer to first occurrence of char c
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		else if (*(s + 1) == c)
			return (s + 1);
		s++;
	}

	return (s + 1);
}
