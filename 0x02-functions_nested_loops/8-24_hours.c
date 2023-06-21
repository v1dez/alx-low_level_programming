#include "main.h"
/**
 * jack_bauer-prints minutes of the day
 * Return: no return
 */
void jack_bauer(void)
{
	int d;
	int f;
	int g;
	int h;

	for (d = 0; d <= 2; d++)
	{
		for (f = 0; f <= 9; f++)
		{
			for (g = 0; g <= 5; g++)
			{
				for (h = 0; h <= 9; h++)
				{
					if (d >= 2 && f >= 4)
						break;
					_putchar(d + 48);
					_putchar(f + 48);
					_putchar(58);
					_putchar(g + 48);
					_putchar(h + 48);
					_putchar('\n');
				}
			}
		}
	}
}
