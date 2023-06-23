#include "main.h"

/**
 * print_square - entry point
 * @size: factor to be considered
 * Return: void successful
 */

void print_square(int size)
{
	int num;

	if (size > 0)
	{
		for (num = 1; num <= (size * size); num++)
		{
			_putchar('#');
			if (num % size == 0)
			{
				_putchar('\n');
			}
		}
	}
	else
	{
		_putchar('\n');
	}
}

