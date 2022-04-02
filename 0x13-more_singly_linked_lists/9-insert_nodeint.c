#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new
 * node at a given position.
 * @head: head of the list
 * @index: location to insert node
 * @n: value of the inserted node
 * Return: pointer to head of list
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	listint_t *a, *b;

	a = *head;
	b = malloc(sizeof(listint_t));
	if (b == NULL)
		return (NULL);
	b->n = n;
	if (index == 0)
	{
		b->next = a;
		*head = b;
		return (*head);
	}
	while (index > 1)
	{
		a = a->next;
		index--;
		if (!a)
		{
			free(b);
			return (NULL);
		}
	}
	b->next = a->next;
	a->next = b;
	return (b);
}
