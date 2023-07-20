#include "variadic_functions.h"

/**
 * sum_them_all - entry
 * @n: integer to be considered
 * Return: sum if sum if successful
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int num = 0;
	va_list args;

	if (n != 0)
	{
		va_start(args, n);

		while (num < n)
		{
			sum += va_arg(args, int);
			num++;
		}
		va_end(args);
		return (sum);
	}
	return (0);
}
