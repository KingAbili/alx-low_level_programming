#include "main.h"

/**
 * _strspn - entry
 * @s: character to consider
 * @accept: charatcer to consider
 * Return: int if succesful
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, b, num, con;

	num = 0;
	for (a = 0; s[a] != '\0'; a++)
	{
		con = 0;
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (accept[b] == s[a])
			{
				num++;
				con = 1;
			}
		}
		if (con == 0)
			return (num);
	}
	return (num);
}

