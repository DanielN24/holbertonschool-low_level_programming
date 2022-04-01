#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning
 *            of a list_t list.
 * @head: A pointer to the head of the list_t list.
 * @n: The string to be added to the list_t list.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *b;

	if (head == NULL)
		return (NULL);

	b = malloc(sizeof(listint_t));
	if (b == NULL)
		return (NULL);

	b->n = n;
	b->next = *head;

	*head = b;

	return (b);
}
