#include "main.h"
/**
 *print_diagonal - function that draws a diagonal line on the terminal.
 *@n: is the number of times the character \ should be printed
*/
void print_diagonal(int n)
{
	int sla;
	int space;

	if (n <= 0)
	{
		_putchar ('\n');
	}
	else
	{
		for (sla = 1; sla <= n; sla++)
		{
			for (space = 1; space < sla; space++)
			{
				_putchar (' ');
			}
			_putchar ('\\');
			_putchar ('\n');
		}
	}
}
