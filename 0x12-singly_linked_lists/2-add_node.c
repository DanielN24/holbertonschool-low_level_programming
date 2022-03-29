#include "lists.h"
#include <string.h>

/**
 * add_node - Adds a new node at the beginning
 *            of a list_t list.
 * @head: A pointer to the head of the list_t list.
 * @str: The string to be added to the list_t list.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */
list_t *add_node(list_t **head, const char *str)
{
	int a, counter = 0;
	list_t *b;

	if (head == NULL)
		return (NULL);

	b = malloc(sizeof(list_t));
	if (b == NULL)
		return (NULL);

	for (a = 0; str[a] != '\0'; a++)
		counter++;

	b->len = a;
	b->str = strdup(str);
	b->next = *head;

	*head = b;

	return (b);
}
