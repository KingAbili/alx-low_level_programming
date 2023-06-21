#include "main.h"

/**
 * print_sign - entry point of the function
 * @n : the character to be considered
 * Return: 1 , 0 and -1 base on the condition
 */

int print_sign(int n)
{
	if (n > 1)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
