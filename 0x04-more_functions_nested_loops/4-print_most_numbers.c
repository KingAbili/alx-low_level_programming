#include "main.h"

/**
 * print_most_numbers - entry point
 * A program to prints digit except few
 * Return: void value
 */

void print_most_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		if (num != 2 && num != 4)
		{
			_putchar('0' + num);
		}
	}
	_putchar('\n');
}
