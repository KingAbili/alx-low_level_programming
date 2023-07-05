#include "main.h"

/**
 * _puts_recursion - entry point
 * @s: the string to considered
 * Returb: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
