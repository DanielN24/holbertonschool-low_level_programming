#include "lists.h"
#include <string.h>

/**
 * add_node_end - Adds a new node at the end
 *                of a list_t list.
 * @head: A pointer the head of the list_t list.
 * @str: The string to be added to the list_t list.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *duplicate;
	int len = 0;
	list_t *b, *c;

	b = malloc(sizeof(list_t));
	if (b == NULL)
		return (NULL);

	duplicate = strdup(str);
	if (str == NULL)
	{
		free(b);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	b->str = duplicate;
	b->len = len;
	b->next = NULL;

	if (*head == NULL)
		*head = b;

	else
	{
		c = *head;
		while (c->next != NULL)
			c = c->next;
		b->next = b;
	}

	return (*head);
}
