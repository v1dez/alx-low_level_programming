#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to
 * newly allocated space in memory
 * @str: string
 * Return: pointer of array of chars
 */
char *_strdup(char *str)
{
	char *strout;
	unsigned int k, j;

	if (str == NULL)
		return (NULL);

	for (k = 0; str[k] != '\0'; k++)
		;

	strout = (char *)malloc(sizeof(char) * (k + 1));

	if (strout == NULL)
		return (NULL);

	for (j = 0; j <= k; j++)
		strout[j] = str[j];

	return (strout);
}
