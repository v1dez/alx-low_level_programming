#include "main.h"
/**
 * print_line- draws a straight line
 * @n: number of times
 * Return: void
 */
void print_line(int n)
{
	int f;

	for (f = 0; f < n; f++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
