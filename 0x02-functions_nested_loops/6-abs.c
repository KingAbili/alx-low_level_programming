#include "main.h"

/**
 * _abs - entry point of the function
 * A program to print the absolute value
 * @c : value to be considered
 * Return: value if successful
 */

int _abs(int c)
{
	if (c < 0)
	{
		int value;

		value = c * -1;
		return (value);
	}
	return (c);
}
