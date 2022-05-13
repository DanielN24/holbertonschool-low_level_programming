#include "lists.h"
/**
 * free_dlistint - function that frees a dlistint_t list.
 * @head: pointer to the current node of the linked list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node = head;

	while (head)
		node = node->next, free(head), head = node;
}
