#include "main.h"

/**
 * print_diagonal - entry
 * @n: character to be considered
 * Return: void (successful)
 */

void print_diagonal(int n)
{
	int num, num1;

	if (n > 0)
	{
		for (num = 1; num <= n; num++)
		{
			for (num1 = 1; num1 <= num; num1++)
			{
				_putchar('\\');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}

