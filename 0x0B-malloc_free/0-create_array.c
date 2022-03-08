#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars
 * @size: variable name
 * @c: variable name
 * Return: NULL if size == 0 or the function fails
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int b;

	if (size == 0)
		return (NULL);
	a = malloc(sizeof(char) * size);
	if (a == NULL)
		return (NULL);
	for (b = 0; b < size; b++)
		a[b] = c;
	return (a);
}
