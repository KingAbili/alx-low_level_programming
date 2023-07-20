#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - entry
 * @separator: variable
 * @n: integer variable
 * Return: sum if successsful
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int num = 0;
	va_list args;

	if (n > 0)
	{
		va_start(args, n);

		while (num < n)
		{
			printf("%d", va_arg(args, int));
			if (num != n - 1 && separator != NULL)
				printf("%s", separator);
			num++;
		}
		va_end(args);
	}
	printf("\n");
}
