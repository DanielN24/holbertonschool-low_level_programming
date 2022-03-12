#include "main.h"
/**
 * array_range - arrays of integers
 * @min: variable name
 * @max: variable name
 * Return: return string with value with min to max
 */
int *array_range(int min, int max)
{
	int *a;
	int b;

	if (min > max)
		return (0);

	a = (int *)malloc(sizeof(int) * (max - min + 1));

	if (!a)
		return (0);

	for (b = 0; min <= max; b++, min++)
		*(a + b) = min;

	return (a);
}

