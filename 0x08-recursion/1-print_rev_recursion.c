#include "main.h"
/**
* _print_rev_recursion - funetion that prints a string in reverse.
*@s: input parameter
*Return: always 0
*/

void _print_rev_recursion(char *s)
{
	if (!s || !*s)
		return;
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
