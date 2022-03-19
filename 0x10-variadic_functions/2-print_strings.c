#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: The string to be printed
 * @n: The number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list a;
	char *strings;
	unsigned int b;

	va_start(a, n);

	for (b = 0; b < n; b++)
	{
		strings = va_arg(a, char *);

		if (strings == NULL)
			printf("(nil)");
		else
			printf("%s", strings);

		if (b != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(a);
}
