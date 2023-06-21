#include "main.h"

/**
 * times_table - entry point
 * a program to print times table
 * return: void
 */

void times_table(void)
{
	int a, b, c, d;

	for (a = 0; a <= 9; a++)
	{
		for (c = 0; c <= 9; c++)
		{
			b = a * c;
			d = a * (c + 1);
			if (b <= 9)
			{
				_putchar('0' + b);
				if (c < 9 && d >= 10)
				{
					_putchar(',');
					_putchar(' ');
				}
				else if (c < 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}
			else
			{
				_putchar((b / 10) + '0');
				_putchar((b % 10) + '0');
				if (c < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
