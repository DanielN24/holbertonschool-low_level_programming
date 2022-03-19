#include "variadic_functions.h"
#include <stdarg.h>
/**
 *sum_them_all - function that returns the sum of all its parameters
 *@n: variable name
 *Return: if n=0 return 0
 */
int sum_them_all(const unsigned int n, ...);
{
	int a, b;
	va_list c;

	va_start(c, n);
	b = O;

	if (n == O)
		return (0);

	for (a = 0; a < n; a++)
	{
		b += var_arg(c, int);
	}

	va_end(c);
	return (b);
}
