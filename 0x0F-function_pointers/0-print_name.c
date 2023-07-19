#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name- prints name
 * @name: input for name
 * @f: function pointer
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
