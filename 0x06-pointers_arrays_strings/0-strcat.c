#include "main.h"

/**
 * _strcat - name of function
 * @dest: string to be considered
 * @src: string to be considered
 * Return: a pointer to the destination string
 */

char *_strcat(char *dest, char *src)
{
	int len = 0;
	int a;

	while (dest[len])
	{
		len++;
	}
	for (a = 0; src[a] != 0; a++)
	{
		dest[len] = src[a];
		len++;
	}
	dest[len] = '\0';
	return (dest);
}
