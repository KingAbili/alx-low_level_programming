#include "main.h"
#include <unistd.h>

/**
 *_putchar - writes the character c to stdout
 * @c: print the character
 * Return: 1 (successful)
 * -1 is retured on error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
