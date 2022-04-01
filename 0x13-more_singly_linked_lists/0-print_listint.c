#include "lists.h"
#include <stdio.h>

/**
* print_listint - Prints all the elements of a listint_t list.
* @h: list
* Return: The number of node
*/
size_t print_listint(const listint_t *h)
{
	size_t node = 0;

	while (h)
	{
		printf("%d\n", h->n);

		node++;
		h = h->next;
	}
	return (node);
}
