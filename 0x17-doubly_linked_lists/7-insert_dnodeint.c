#include "lists.h"
/**
 * insert_dnodeint_at_index - Insert nodes a given position
 * @h: pointer to the current node of the linked list
 * @idx: position where to add the new node
 * @n: value of the node to add
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = NULL, *node = NULL;

	if (!h)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	node = *h;
	while (idx > 1)
	{
		node = node->next, idx--;
		if (!node)
			return (NULL);
	}
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->prev = node;
	new_node->next = node->next;
	node->next = new_node;
	if (new_node->next)
		new_node->next->prev = new_node;

	return (new_node);
}
