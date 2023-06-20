#include "main.h"
#include <stdio.h>
/**
 * _putchar - Custom function to print a character
 * @c: The character to be printed
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (putchar(c));
}
/**
 * main - Entry point
 * Description: Prints _putchar followed by a new line
 * Return: 0
 */
int main(void)
{
	_putchar('_');
	_putchar('p');
	_putchar('u');
	_putchar('t');
	_putchar('c');
	_putchar('h');
	_putchar('a');
	_putchar('r');
	_putchar('\n');
	return (0);
}

