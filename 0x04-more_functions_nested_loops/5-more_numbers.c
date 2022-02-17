#include "main.h"
/**
 *more_numbers - function that prints 10 times the numbers, from 0 to 14
*/
void more_numbers(void)
{
	int num;
	int numx10 = 0;

	for (numx10 = 1; numx10 <= 10; numx10++)
	{
		for (num = 0; num <= 14; num++)
	{
		if (num >= 10)
		{
			_putchar((num / 10) + '0');
		}
		_putchar ((num % 10) + '0');
	}
	_putchar('\n');
	}
}
