#include "lists.h"

/**
 * pop_listint - check the code
 *@head: head node
 * Return: element deleted.
 */

int pop_listint(listint_t **head)
{
	int a;
	listint_t *b;

	if (!head || !*head)
		return (0);

	a = (*head)->n;
	b = *head;
	*head = (*head)->next;
	free(b);
	return (a);
}
