#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data (n)
 * of a listint_t linked list.
 *@head: head node
 * Return: sum of elements.
 */

int sum_listint(listint_t *head)
{
	int a = 0;

	while (head)
	{
		a += head->n;
		head = head->next;
	}

	return (a);
}
