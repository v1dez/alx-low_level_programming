#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: pointer to the newly created array
 * if min > mix return NULL
 * if malloc fails return NULL
 */

int *array_range(int min, int max)
{
	int *zw;
	int k;

	if (min > max)
		return (NULL);

	zw = malloc(sizeof(*zw) * ((max - min) + 1));

	if (zw == NULL)
		return (NULL);

	for (k = 0; min <= max; k++, min++)
		zw[k] = min;

	return (zw);
}
