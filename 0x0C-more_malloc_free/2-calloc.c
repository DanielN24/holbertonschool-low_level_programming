#include "main.h"
/**
 * _calloc - allocates memory for an array
 * @nmemb: variable name
 * @size: variable name
 * Return: pointer for array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int b;

	/*look if nmem or size are valid*/
	if (nmemb == 0 || size == 0)
		return (NULL);

	/*asign space of size and nmem*/
	a = malloc(size * nmemb);

	if (a == NULL)
		return (NULL);

	for (b = 0; b < (size * nmemb); b++)
		a[b] = 0;

	return (a);
}

