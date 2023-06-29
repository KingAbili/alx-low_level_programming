#include "main.h"

/**
 * _strcmp - entry to compare two strings
 * @s1: character to be considered
 * @s2: character to be considered
 * Return: s1 0r s2 depending on the condition
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
