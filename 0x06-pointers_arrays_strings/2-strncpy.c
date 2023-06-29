#include "main.h"

/**
 * _strncpy - entry to copy the most input
 * @dest: buffer storing string
 * @src: source string
 * @n: number of bytes to copy
 * Return: a pointer to the resulting string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int len = 0;

	while (src[i++])
		len++;

	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];

	for (i = len; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
