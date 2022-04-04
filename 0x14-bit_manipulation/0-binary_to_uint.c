#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: pointer to string
 * Return: decimal number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int bin = 0;

	if (!b)
		return (0);

	for (; *b != '\0'; b++)
	{
		bin = bin << 1;
		if (*b != '1' && *b != '0')
			return (0);
		else if (*b == '1')
			bin = bin | 1;
	}
	return (bin);
}
