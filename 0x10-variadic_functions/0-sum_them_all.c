#include "variadic_functions.h"
#include <stdarg.h>
/**
 *sum_them_all - function that returns the sum of all its parameters
 *@n: variable name
 *@...: variable number of paramters to calculate
 *Return: if n=0 return 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int a, b = 0;
	va_list c;

	va_start(c, n);

	if (n == 0)
		return (0);

	for (a = 0; a < n; a++)
	{
		b += va_arg(c, const unsigned int);
	}

	va_end(c);
	return (b);
}
