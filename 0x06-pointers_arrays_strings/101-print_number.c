#include "main.h"

/**
  * print_number -Prints any integer
  * @n: number
  * Return: 0
  */
void print_number(int n)
{
	unsigned int k;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	k = n;

	if (k / 10)
		print_number(k / 10);

	_putchar(k % 10 + '0');
}
