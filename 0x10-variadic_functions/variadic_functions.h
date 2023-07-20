#ifndef _HEADER_
#define _HEADER_
#include <stdarg.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_a_char(char *seperator, va_list args);
void print_a_integer(char *seperator, va_list args);
void print_a_float(char *seperator, va_list args);
void print_a_char_ptr(char *seperator, va_list args);

/**
 * struct format_types - format_types strucuture
 * @identifier: the conversion specifier
 * @f: the pointer
 */

typedef struct format_types
{
	char *identifier;
	void (*f)(char *seperator, va_list);
} f_dt;
#endif
