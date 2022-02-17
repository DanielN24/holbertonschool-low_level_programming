#include "main.h"
/**
 *print_square - function that prints a square
 *@size: is the size of the square
*/
void print_square(int size)
{
	int hash;
	int square;

	if (size <= 0)
	{
		_putchar ('\n');
	}
	else
		for (hash = 1; hash <= size; hash++)
		{
			_putchar ('#');
			for (square = 2; square <= size; square++)
			{
				_putchar ('#');
			}
			_putchar ('\n');
		}
}
