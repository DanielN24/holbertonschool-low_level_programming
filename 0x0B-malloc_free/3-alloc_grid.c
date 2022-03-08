#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to a 2 dimensional array
 * @width: variable name
 * @height: variable name
 * Return: always 0
 */

int **alloc_grid(int width, int height)
{
	int a = 0, b = 0, **c;

	if (width <= 0 || height <= 0)
		return (NULL);

	c = malloc(sizeof(int *) * height);

	if (!c)
		return (NULL);

	while (a < height)
	{
		c[a] = malloc(sizeof(int) * width);

		if (c[a] == NULL)
		{
			for (a = a - 1; a >= 0; a--)
				free(c[a]);

			free(c);
			return (NULL);
		}

		for (b = 0; b < width; b++)
			c[a][b] = 0;

		a++;
	}
	return (c);
}
