#include "main.h"

/**
 * _isdigit - entry point
 * @c: character to be considered
 * Return: 1 and 0 in either scenario
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
