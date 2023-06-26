#include "main.h"

/**
 * puts_half - print second half of a string
 * @str: character
 * Return: 0
 */

void puts_half(char *str)
{
	int k;

	for (k = 0; str[k] != '\0'; k++)
		k++;
	for (k /= 2; str[k] != '\0'; k++)
	{
		_putchar(str[k]);
	}
	_putchar('\n');
}
