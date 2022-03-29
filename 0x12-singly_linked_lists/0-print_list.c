#include "main.h"
#include <stdio.h>

/**
* print_list - Prints all the elements of a list_t list.
* @h: list
* Return: The number of node
*/
size_t print_list(const list_t *h)
{
	size_t node = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);

		node++;
		h = h->next;
	}
	return (node);
}
