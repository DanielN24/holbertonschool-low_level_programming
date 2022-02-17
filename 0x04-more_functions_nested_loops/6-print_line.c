#include "main.h"
/**
 *print_line - function that draws a straight line in the terminal
 *@n: is the number of times '_'  should be printed
*/
void print_line(int n)
{
	int line;

	if (n <= 0)
	{
		_putchar ('\n');
	}
	else
	{
		for (line = 1; line <= n; line++)
		{
			_putchar ('_');
		}
		_putchar ('\n');
	}
}
