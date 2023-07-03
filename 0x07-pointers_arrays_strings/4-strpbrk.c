#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - entry
 * @s: charater one
 * @accept: character two
 * Return: any if scuccesful
 */
char *_strpbrk(char *s, char *accept)
{
	int a, num;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (num = 0; accept[num] != '\0'; num++)
		{
			if (s[a] == accept[num])
				return (s + a);
		}
	}
	return (NULL);
}
