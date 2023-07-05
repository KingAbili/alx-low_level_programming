#include "main.h"

/**
 * factorial - entry
 * @n: the number for factorial
 * Return: value for factorial
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n <= 1)
		return (1);
	else
		return (n * factorial(n - 1));

}
