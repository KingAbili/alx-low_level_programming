#include "main.h"

/**
 * more_numbers - entry
 * A program to print 0 to 14
 * Return: void
 */

void more_numbers(void)
{
	int i, num;

	for (i = 1; i <= 10; i++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num >= 10)
			{
				_putchar('0' + (num / 10));
			}
			_putchar('0' + (num % 10));
		}
		_putchar('\n');
	}
}
