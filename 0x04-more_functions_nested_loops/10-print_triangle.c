#include "main.h"
/**
*print_triangle - function that prints a triangle
*@size: the size of the triangle
*/
void print_triangle(int size)
{
	int tri, space;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
		for (space = 1; space <= size; space++)
		{
			for (tri = 1; tri <= size; tri++)
			{
				if (tri <= (size - space))
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
		_putchar('\n');
		}
}
