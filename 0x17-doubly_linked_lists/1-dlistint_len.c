#include "lists.h"

/**
 * dlistint_len - function that returns the number of
 * elements in a linked dlistint_t list.
 * @h: first node of the linked list
 * Return: number of nodes of the linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h)
		h = h->next, count++;

	return (count);
}
