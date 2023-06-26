#include "main.h"

/**
 * _strlen - entry point
 * @s: string to be considered
 * Return: string lenth
 */

int _strlen(char *s)
{
	int length_string = 0;

	while (*s++)
	length_string++;
	return (length_string);
}
