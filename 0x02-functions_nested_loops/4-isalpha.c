#include "main.h"

/**
 * _isalpha - entry point of function
 * @c : character to be considered
 * Return: 1 for upper and lower case and 0 otherwise
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	{
	return (1);
	}
	return (0);
}
