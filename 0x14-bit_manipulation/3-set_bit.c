#include "main.h"

/**
 * set_bit - function that sets the value of a bit at a given index to 1.
 * @n: number
 * @index: index of a number
 * Return: Always 0
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n ^= (1 << index);
	return (1);
}
