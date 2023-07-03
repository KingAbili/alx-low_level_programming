#include "main.h"
#include <stdio.h>

/**
 * _strchr - entry
 * @s: character to be considered
 * @c: character to be considered
 * Return: either condition if successful
 */

char *_strchr(char *s, char c)
{
	int num;

	for (num = 0; s[num] >= '\n'; num++)
	{
		if (s[num] == c)
			return (s + num);
	}
	return (NULL);
}
