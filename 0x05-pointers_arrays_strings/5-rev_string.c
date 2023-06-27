#include "main.h"

/**
 * rev_string - entry point
 * @s: The string
 * Return: void
 */

void rev_string(char *s)
{
	int a = 0;
	int b = 0;
	char st;

	while (s[b++])
		a++;

	for (b = a - 1; b >= a / 2; b--)
	{
		st = s[b];
		s[b] = s[a - b - 1];
		s[a - b - 1] = st;
	}
}
