#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_all - entry
 * @format: conversion specifier
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list args;
	f_dt form_types[] = {
		{ "c", print_a_char },
		{ "i", print_a_integer },
		{ "f", print_a_float },
		{ "s", print_a_char_ptr }
	};
	unsigned int a = 0;
	unsigned int b = 0;
	char *separator = "";

	va_start(args, format);

	while (format != NULL && format[a])
	{
		b = 0;
		while (b < 4)
		{
			if (format[a] == *form_types[b].identifier)
			{
				form_types[b].f(separator, args);
				separator = ", ";
			}
			b++;
		}
		a++;
	}
	va_end(args);
	printf("\n");
}

/**
 * print_a_char - entry
 * @separator: variable
 * @args: variadic arguments
 * Return: void
 */

void print_a_char(char *separator, va_list args)
{
	printf("%s%c", separator, va_arg(args, int));
}

/**
 * print_a_integer - entry
 * @separator: character separator
 * @args: variadic arguments
 * Return: void
 */

void print_a_integer(char *separator, va_list args)
{
	printf("%s%i", separator, va_arg(args, int));
}

/**
 * print_a_float - entry
 * @separator: variable
 * @args: variadic arguments
 * Return: void
 */

void print_a_float(char *separator, va_list args)
{
	printf("%s%f", separator, va_arg(args, double));
}

/**
 * print_a_char_ptr - entry
 * @separator: character separator
 * @args: variadic arguments
 * Return: void
 */

void print_a_char_ptr(char *separator, va_list args)
{
	char *arg = va_arg(args, char *);

	if (arg == NULL)
	{
		printf("%s%s", separator, "(nil)");
		return;
	}
	printf("%s%s", separator, arg);
}
