#include <stdio.h>
#include "main.h"

/**
 * _strchr - entry
 * @s: character to be considered
 * @c: character to be considered
 * Return: either condition if successful
 */

char *_strchr(char *s, char c)
{
	int num;

	for (num = 0; s[num] >= '\0'; num++)
	{
		if (s[num] == c)
			return (s + num);
	}
	return (NULL);
}
