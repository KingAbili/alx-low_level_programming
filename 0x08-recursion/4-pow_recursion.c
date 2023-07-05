#include "main.h"

/**
 * _pow_recursion - entry that returns the power of a value
 * @x: the value
 * @y: the power
 * Return: the integer
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
