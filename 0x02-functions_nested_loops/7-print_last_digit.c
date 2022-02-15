#include "main.h"
/**
 *print_last_digit - prints the last digit of a number.
 *@pld: numbers
 *Return: ld and absolut value
*/
int print_last_digit(int pld)
{
	int ld = pld % 10;

	if (ld < 0)
		ld = -ld;
	_putchar (ld + '0');
	return (ld);
}
