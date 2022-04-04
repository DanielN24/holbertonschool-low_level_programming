#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index.
 * @n: number
 * @index: posiitions to move
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	int add;

	if (index > 31)
		return (-1);
	add = 1 << index;
	*n = *n & (~add);
	return (1);
}
