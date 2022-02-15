#include "main.h"
/**
 *print_sign - print signs
 *@n: is a variable
 *Return: 1 if n>0, 0 else if n=0, -1 else
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar ('0');
		return (0);
	}
	else
	{
		_putchar ('-');
		return (-1);
	}
	return (0);
}
