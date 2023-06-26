#include "main.h"

/**
 * swap_int - entry
 * @a:  variable to be considered
 * @b: variable to be considered
 * Return: void (succesful)
 */

void swap_int(int *a, int *b)
{
	int num;

	num = *a;
	*a = *b;
	*b = num;
}
