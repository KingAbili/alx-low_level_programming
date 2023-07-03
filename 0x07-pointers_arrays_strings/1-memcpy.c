#include "main.h"

/**
 * _memcpy - entry point
 * @dest: destination area
 * @src: memory area
 * @n: value of bytes
 * Return: dest if successful
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int num;

	for (num = 0; num < n; num++)
		dest[num] = src[num];
	return (dest);
}
