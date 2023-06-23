#include "main.h"

/**
 * _isupper - entry point of the function
 * @c: character to be considered
 * A program to print upper and lower case
 * Return: 1 or 0 either case
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
