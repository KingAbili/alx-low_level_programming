#include "main.h"

/**
 * print_alphabet_x10 - entry point for function
 * a program to print alphabets 10 times
 * Return: void (successful);
 */

void print_alphabet_x10(void)
{
	char c;
	int i;

	for (i = 1; i <= 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
