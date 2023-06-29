#include "main.h"

/**
 * _strncat- entry point
 * @dest: string to be considered
 * @src: string to be considered
 * @n: value to be considered
 * Return: values
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int len = 0;

	while (dest[i++])
		len++;
	for (i = 0; src[i] && i < n; i++)
	{
		dest[len++] = src[i];
	}
	return (dest);
}
