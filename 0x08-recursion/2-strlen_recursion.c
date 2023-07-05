#include "main.h"

/**
 * _strlen_recursion - entry
 * @s: atring to consider
 * Return: integer for the lenght
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (_strlen_recursion(s) + 1);
}
