#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - entry
 * @separator: variable one
 * @n: integer variable
 * Return: sum if successful
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int num = 0;
	char *strng;

	if (n > 0)
	{
		va_start(args, n);
		while (num < n)
		{
			strng = va_arg(args, char *);
			if (strng == NULL)
				printf("%s", "(nil)");
			else
				printf("%s", strng);
			if (num != n - 1 && separator != NULL)
				printf("%s", separator);
			num++;
		}
		va_end(args);
	}
	printf("\n");
}
