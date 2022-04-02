#include "lists.h"
#include <string.h>

/**
 * add_nodeint_end - Adds a new node at the end
 *                of a list_t list.
 * @head: A pointer the head of the list_t list.
 * @n: The string to be added to the list_t list.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *b, *c;

	b = malloc(sizeof(listint_t));
	if (b == NULL)
		return (NULL);	

	b->n = n;
	b->next = NULL;

	if (*head == NULL)
		*head = b;

	else
	{
		c = *head;
		while (c->next != NULL)
			c = c->next;
		c->next = b;
	}
	return (*head);
}
