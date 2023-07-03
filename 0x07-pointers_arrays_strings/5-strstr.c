#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: longer string to search
 * @needle: first occurrence of the substring
 * Return: pointer substring
 * or @Null if it not found
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int a = 0, b = 0;

	while (haystack[a])
	{
		while (needle[b] && (haystack[a] == needle[0]))
		{
			if (haystack[a + b] == needle[b])
				b++;
			else
				break;
		}
		if (needle[b])
		{
			a++;
			b = 0;
		}
		else
			return (haystack + a);
	}
	return (0);
}
