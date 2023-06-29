#include "main.h"
#include <stdio.h>
/**
 * rot13 - encode using rot13
 * @s: string
 * Return: s
 */
char *rot13(char *s)
{
	int j = 0, k = 0;
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char alpha2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + j) != 0)
	{
		for (k = 0; k <= 52; k++)
		{
			if (*(s + j) == alpha[k])
			{
				*(s + j) = alpha2[k];
				break;
			}
		}
				j++;
	}
		return (s);
}

