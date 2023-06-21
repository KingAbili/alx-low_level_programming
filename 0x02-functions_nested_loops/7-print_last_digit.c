#include "main.h"

/**
 * print_last_digit - entry point of a function
 * @c: character considred
 * Return: Value (successful)
 */

int print_last_digit(int c)
{
	int value;

	if (c < 0)
	{
		value = (c * -1) % 10;
		_putchar('0' + value);
		return (value);
	}
	else
	{
		value = c % 10;
		_putchar('0' + value);
		return (value);
	}
}
