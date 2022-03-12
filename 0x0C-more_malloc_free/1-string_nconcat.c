#include "main.h"
/**
 * string_nconcat - function to concatenate 2 strings
 * @s1: variable name
 * @s2: variable name
 * @n: variable unsigned name
 * Return: new string concatenated
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a, b = 0, c = 0;
	char *d;

	if (s1)
	{
		while (s1[b])
			b++;
	}
	if (s2)
	{
		while (s2[c])
			c++;
	}

	if (c > n)
		c = n;

	d = malloc(sizeof(char) * (b + c + 1));

	if (!d)
		return ('\0');
	for (a = 0; a < b; a++)
		d[a] = s1[a];
	for (a = 0; a < c; a++)
		d[a + b] = s2[a];

	d[b + c] = '\0';

	return (d);
}

