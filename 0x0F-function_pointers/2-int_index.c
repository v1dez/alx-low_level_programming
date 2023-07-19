#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: 1st parameter
 * @size: 2nd parameter
 * @cmp: 3rd parameter
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int k;

	if (size <= 0 || array == NULL || cmp == NULL)
	{
		return (-1);
	}
	for (k = 0; k < size; k++)
	{
		if (cmp(*(array + k)))
		{
			return (k);
		}
	}
	return (-1);
}
