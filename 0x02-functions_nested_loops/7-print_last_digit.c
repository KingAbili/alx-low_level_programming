#include "main.h"

/**
 * print_last_digit - entry point of a function
 * @c: character considred
 * Return: Value (successful)
 */

int print_last_digit(int c)
{
	int value;

	value = c % 10;
	if (c < 0)
	{
		value = value * -1;
	}
	_putchar('0' + value);
	return (value);
}
