#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function to concatene two strings
 * @s1: variable name
 * @s2: variable name
 * Return: a pointer to tha allocated memory Area.
 */
char *str_concat(char *s1, char *s2)
{
	int a = 0, b = 0, c = 0, d = 0;
	char *e;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (*(s1 + a))
		a++;

	while (*(s2 + b))
		b++;

	e = malloc((a + b) + 1);

	if (e == NULL)
		return (NULL);
	c = 0;

	while (c < a)
	{
		*(e + c) = *(s1 + c);
		c++;
	}

	d = 0;
	while (d <= b)
	{
		*(e + d + a) = *(s2 + d);
		d++;
	}
	return (e);
}
