#include "main.h"

/**
 * _memset - entry point
 * @s: character to be considered
 * @b: character to be considered
 * @n: integer to be considered
 * Return: character if successful
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int num;

	for (num = 0; num < n; num++)
		s[num] = b;
	return (s);
}
