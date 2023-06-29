#include "main.h"

/**
 * string_toupper - change lowercase to uppercase
 * @s:string
 * Return:char
 */
char *string_toupper(char *s)
{

	int k = 0;

	while (*(s + k))
	{
		if (*(s + k) >= 'a' && *(s + k) <= 'z')
			*(s + k) -= 'a' - 'A';
		k++;
	}
	return (s);
}
