#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly in memory
 * @str: variable name
 * Return: NULL if str == NULL or insufficient memory is available
 */
char *_strdup(char *str)
{
	char *a;
	int b, c = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	for (b = 0; str[b]; b++)
		c++;
	a = malloc(sizeof(char) * (c + 1));
	if (a == NULL)
		return (NULL);
	for (b = 0; str[b]; b++)
		a[b] = str[b];
	a[c] = '\0';
	return (a);
}
