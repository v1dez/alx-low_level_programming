#include "main.h"

/**
 * reverse_array -reverses the
 * content of an array of integers
 * @a: array
 * @n: integer
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int m;
	int k;

	for (m = 0; (m < (n - 1) / 2); m++)
	{
		k = a[m];
		a[m] = a[n - 1 - m];
		a[n - 1 - m] = k;
	}
}
